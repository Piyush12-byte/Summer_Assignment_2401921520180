class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int n = s1.size();
        int m = s2.size();

        if(n > m) return false;

        vector<int> cnt1(26, 0);
        vector<int> cnt2(26, 0);

        for(char ch : s1) {
            cnt1[ch - 'a']++;
        }

        int left = 0;

        for(int right = 0; right < m; right++) {

            cnt2[s2[right] - 'a']++;

            if(right - left + 1 > n) {
                cnt2[s2[left] - 'a']--;
                left++;
            }

            if(right - left + 1 == n) {
                if(cnt1 == cnt2) {
                    return true;
                }
            }
        }

        return false;
    }
};
