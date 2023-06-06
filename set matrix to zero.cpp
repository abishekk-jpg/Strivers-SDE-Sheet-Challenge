//Brute Force approach
class Solution {
public:
    //marking the row to -1
    void makeRow(int i,vector<vector<int>>& matrix){
        int m=matrix[0].size();
        for(int j=0;j<m;j++){
            if(matrix[i][j]!=0)
                matrix[i][j]=-1;
        }
    }
    //marking column to -1
     void makeCol(int j,vector<vector<int>>& matrix){
        int n=matrix.size();
        for(int i=0;i<n;i++){
            if(matrix[i][j]!=0)
                matrix[i][j]=-1;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        //traversing the matirx to find the zero and mark row and col to -1
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    makeRow(i,matrix);
                    makeCol(j,matrix);
                }
            }
        }
        //retraversing the matrix to make all -1 to 0
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==-1){
                    matrix[i][j]=0;
                }
            }
        }
    }


    //Better approach

    class Solution {
    public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n=matrix.size();  //no.of rows
        int m=matrix[0].size(); //no. of cols

        //making two array and all are 0 
        vector<int>row(n,0);
        vector<int>col(m,0);

        //traversing the matrix and find 0 and mark row and col at index to 1
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }

        //retraverse the matirx and make all 1 of row or col to 0

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(row[i] or col[j]){
                    matrix[i][j]=0;
                }
            }
        }
    }

};
};