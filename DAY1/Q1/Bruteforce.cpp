class Solution {
public:
   
    void setZeroes(vector<vector<int>>& matrix) {
        int m= matrix.size();//row size
        int n=matrix[0].size();//column size

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    //Marking row
                    for(int k=0;k<m;k++){
                        if(matrix[k][j]!=0)
                        {
                           matrix[k][j]=-1; 
                        }
                    }
                    //Marking column
                      for(int k=0;k<n;k++){
                        if(matrix[i][k]!=0)
                        {
                           matrix[i][k]=-2; 
                        }
                    }
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==-1){
                    matrix[i][j]=0;
                }
            }

        }
     
    }
};