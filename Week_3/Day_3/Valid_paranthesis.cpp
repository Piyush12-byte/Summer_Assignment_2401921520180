class Solution {
private:
   bool matches(char ch,char top){
    if((ch==')'&&top=='(')||
    (ch=='}'&&top=='{')||
    (ch==']'&&top=='[')){
        return true;
    }
   return false; 
   }
public:
    bool isValid(string s) {
     
     int n=s.size();
     stack<char>st;

     for(int i=0;i<n;i++){
        char ch =s[i];

        // if opening bracket push into the stack
        // if closing bracket check top of stack and pop

        if(ch=='('||ch=='{'||ch=='['){
            st.push(ch);
        }else if(!st.empty()){
                char top =st.top();
                if(matches(ch,top)){
                    st.pop();
                }else{
                    return false;
                }
        }    
        else{
                return false;
            }    
     }

     if(st.empty()) return true;
     else return false;
    }
};
