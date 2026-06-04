class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int row=mat.size();
        int col=mat[0].size();

        if(row*col!=r*c) return mat;

        vector<vector<int>>ans(r,vector<int>(c));

        for(int i=0;i<row*col;i++){

            int oldr=i/col;
            int oldc=i%col;

            int newr=i/c;
            int newc=i%c;

            ans[newr][newc]=mat[oldr][oldc];
        }
       return ans; 
    }
};
