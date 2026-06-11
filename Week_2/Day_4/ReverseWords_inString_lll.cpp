class Solution {
private:
   void reverse(string s,string&ans){
       
       int i=0;
       int j=s.size()-1;

       while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
       }
       ans+=s;
       ans+=" ";
    }    
public:
    string reverseWords(string s) {
        
        string ans="";
        
        for(int i=0;i<s.size();i++){
            string temp="";

            while(i<s.size()&&s[i]!=' '){
               temp+=s[i];
               i++;
            }
           reverse(temp,ans);
        }
       ans.pop_back(); 
       return ans; 
    }
};
