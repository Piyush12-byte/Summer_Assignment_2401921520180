class Solution {
private:
   bool is_valid(char ch){
     if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'||ch>='0'&&ch<='9'){
        return true;
     }
     return false;
   }

   char tolowercase(char ch){
     if(ch>='a'&&ch<='z'||ch>='0'&&ch<='9'){
        return ch;
     }
     else{
        char temp=ch-'A'+'a';
        return temp;
     }
   }

   bool check_palindrome(string a){
    int s=0;
    int e=a.size()-1;
     
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
   }
   
       
public:
    bool isPalindrome(string s) {
        // we can solve this in three steps:
    
         string temp="";
        //step 1 :saare invalid character remove karo aur build karo valid string:
        for(int i=0;i<s.size();i++){
           if(is_valid(s[i])){
              temp.push_back(s[i]);
           }
        }

        // step 2 :saare uppercase lowercase me karo:
        for(int i=0;i<temp.size();i++){
            temp[i]=tolowercase(temp[i]);
        }

        // step 3:check if palindrome or not

        if(check_palindrome(temp)) return true;

        return false;

         
    }
};
