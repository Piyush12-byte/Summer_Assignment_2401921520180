class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        int l=0,r=0;
        int n=s.length();
        int hash[256];//ascii values 

        for(int i=0;i<256;i++){
            hash[i]=-1;
        }

        while(r<n){
            if(hash[s[r]]!=-1&&hash[s[r]]>=l){
                l=hash[s[r]]+1;
            }
            int len=r-l+1;
            maxlen=max(len,maxlen);
            hash[s[r]]=r;
            r++;
        }
      return maxlen;  
    }
};
