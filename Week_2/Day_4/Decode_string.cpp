class Solution {
private:
    string solve(string& s, int& i) {
        
        string ans = "";
        int num = 0;

        while (i < s.size()) {

            // Number build karna
            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }

            // Recursive part
            else if (s[i] == '[') {
                i++;  // '[' skip karo

                string temp = solve(s, i);

                // temp ko num times add karo
                while (num--) {
                    ans += temp;
                }

                num = 0;
            }

            // Current level khatam
            else if (s[i] == ']') {
                i++;   // ']' skip karo
                return ans;
            }

            // Normal character
            else {
                ans += s[i];
                i++;
            }
        }

        return ans;
    }

public:
    string decodeString(string s) {
        int i = 0;
        return solve(s, i);
    }
};
