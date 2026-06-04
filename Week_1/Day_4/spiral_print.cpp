class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int>ans;
       int count =0;

       int row=matrix.size();
       int col = matrix[0].size();
       int total=row*col;
       // indexing:
       int srow=0;
       int scol=0;
       int erow=row-1;
       int ecol=col-1;

       while(count<total){

        // printing first row:
        for(int index=scol;count<total&&index<=ecol;index++){
            ans.push_back(matrix[srow][index]);
            count++;
        }
        srow++;// it also avoids duplication:

        // printing ending coloumn
        for(int index=srow;count<total&&index<=erow;index++){
            ans.push_back(matrix[index][ecol]);
            count++;
        }
        ecol--;

        // printing ending row
        for(int index=ecol;count<total&&index>=scol;index--){
            ans.push_back(matrix[erow][index]);
            count++;
        }
        erow--;

        // printing first coloumn:
        for(int index=erow;count<total&&index>=srow;index--){
            ans.push_back(matrix[index][scol]);
            count++;
        }
        scol++;
       }

       return ans;
    }
};
