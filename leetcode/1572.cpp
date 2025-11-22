class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        int sum=0;
        int max1= col-1;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(i==j){
                    sum=sum+mat[i][j];
                }
                if(i+j==max1 &&  i!=j){
                   sum=sum+mat[i][j]; 
                }

            }
        }
      return sum;  
    }
};