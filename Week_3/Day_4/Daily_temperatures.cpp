class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        st.push(0);
        int n=temperatures.size();
        vector<int>ans(n);

        for(int i=n-1;i>=0;i--){
            int curr=temperatures[i];

            while(st.top()!=0&&temperatures[st.top()]<=curr){
                st.pop();
            }
            if(st.top()==0) ans[i]=0;
            else  ans[i]=st.top()-i;
            st.push(i);
        }
       return ans; 
    }
};
