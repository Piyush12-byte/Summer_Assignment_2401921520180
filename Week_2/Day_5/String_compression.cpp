class Solution {
public:
    int compress(vector<char>& chars) {

       int i=0;
       int j=0;
       vector<char>ans;
      
       while(i<chars.size()&&j<chars.size()){

         char ch=chars[i];

         while(j<chars.size()&&chars[i]==chars[j]){
             j++;
         }

         int n=j-i;
         ans.push_back(ch);

         if(n>1){
           string s=to_string(n);

              for(char val:s){
               ans.push_back(val);
              }
            }
            i=j;
       }

       for(int k=0;k<ans.size();k++){
         chars[k]=ans[k];
       }
       return ans.size();
    }
};
