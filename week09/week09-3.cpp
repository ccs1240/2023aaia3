class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M=matrix.size();
        int N=matrix[0].size();
        vector<bool> left(M);
        vector<bool> up(N);
        for(int i=0;i<M;i++){ ///check where is 0
            for(int j=0;j<N;j++){ 
                if(matrix[i][j]==0){ ///if is 0 ,to left and up check
                    left[i]=true; //left check
                    up[j]=true; //up check
                }
            }
        }
        for(int i=0;i<M;i++){ //have a loop,to watch left[i] value 
            if(left[i]==true){
                for(int j= 0;j<N;j++) matrix[i][j]=0;
            }
        }
        for(int j=0;j<N;j++){//"" up[j]
            if(up[j]==true){
                for(int i= 0;i<M;i++) matrix[i][j]=0;
            }
        }
    }
};