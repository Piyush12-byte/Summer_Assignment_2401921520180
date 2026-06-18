class Solution {
private:
    vector<int> find_nse(vector<int> arr){

        stack<int>st;
        int n=arr.size();
        vector<int>ans(n);
        st.push(-1);

        for(int i=arr.size()-1;i>=0;i--){
          int curr=arr[i];

          while(st.top()!=-1&&arr[st.top()]>=curr){
            st.pop();
          }
         ans[i]=st.top();
         st.push(i);
        }

       return ans; 
    } 

    vector<int> find_pse(vector<int> arr){

        stack<int>st;
        int n=arr.size();
        vector<int>ans(n);
        st.push(-1);

        for(int i=0;i<n;i++){
          int curr=arr[i];

        while(st.top()!=-1&&arr[st.top()]>=curr){
            st.pop();
          }
         ans[i]=st.top();
         st.push(i);
        }

       return ans; 

    }   
public:
    int largestRectangleArea(vector<int>& heights) {
       vector<int>nse;
       vector<int>pse;

       nse=find_nse(heights);
       pse=find_pse(heights);
 

       int maxi=0;
       for(int i=0;i<heights.size();i++){
         if(nse[i]==-1){
            nse[i]=heights.size();
         }
        int area=heights[i]*(nse[i]-pse[i]-1);
         maxi=max(maxi,area);
       }
    return maxi;
    }
};
