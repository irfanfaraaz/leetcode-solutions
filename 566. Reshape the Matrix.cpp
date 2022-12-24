class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> a(r, vector<int>(c,0));
        if(m*n!=r*c){
            return mat;
        }
        else{
            for(int i=0;i<r*c;i++){
                a[i/c][i%c]=mat[i/n][i%n];
            }
        }
        return a;
    }
};
