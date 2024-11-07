//week09-3.cpp
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size();
        int N = matrix[0].size();
        vector<bool> left(M);
        vector<bool> up(M);
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if( matrix[i][j]==0){
                    left[i] = true;
                    up[j] = true;
                }
            }
        }
        for(int i=0; i<M; i++){
            if(left[i]==true){
                for(int j=0; j<N; j++) matrix[i][j] = 0;
            }
        }
        for(int j=0; j<N; j++){
            if(up[j]==true){
                for(int i=0; i<M; i++) matrix[i][j] = 0;
            }
        }
    }
};
