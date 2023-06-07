
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lsf=INT_MAX;    //least so far (abb tak ka sbse kam price)
        int pist=0;     //profit if sold today
        int op=0;       //overall profit
        for(int i=0;i<prices.size();i++){
            if(prices[i]<lsf){
                lsf=prices[i];
            }
            pist=prices[i]-lsf;
            if(pist>op){
                op=pist;
            }
        }
        return op;
    }
};