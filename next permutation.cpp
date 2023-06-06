
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //find the inflation point jaha se increment break hota hai
        int infpt=0;
       int n=nums.size()-1;
       for(int i=n;i>0;i--){
           if(nums[i]>nums[i-1]){
               infpt=i;
               break;
           }
       }
        //agar nhi mila to just sort the array
       if(infpt==0){
           sort(nums.begin(),nums.end());
       }
       //we get the to swap value(befor the infpt) and swap with the 
       //just greater to that value and after swapping we just sort
        //other part 
       else{
           int mini=INT_MAX;
           int toswap=nums[infpt-1];
           for(int j=infpt;j<=n;j++){
               if((nums[j]-toswap)>0 and (nums[j]-toswap)<mini){
                   int temp=nums[j];
                   nums[j]=nums[infpt-1];
                   nums[infpt-1]=temp;
               }
           }
           sort(nums.begin()+infpt,nums.end());
       }

    }
};