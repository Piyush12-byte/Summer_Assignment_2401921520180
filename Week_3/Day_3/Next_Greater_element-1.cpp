class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

     stack<int>st;
     st.push(-1);
     unordered_map<int,int>mp;
     int m=nums1.size(),n=nums2.size();

     for(int i=n-1;i>=0;i--){
        int curr=nums2[i];

        while(st.top()<=curr&&st.top()!=-1){
            st.pop();
        }
      mp[nums2[i]]=st.top();
      st.push(curr);
     }

    vector<int>ans(m);
    for(int i=0;i<m;i++){
        ans[i]=mp[nums1[i]];
    }

     return ans;
    }
};
