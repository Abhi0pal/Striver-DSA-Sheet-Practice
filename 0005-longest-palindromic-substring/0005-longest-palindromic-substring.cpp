class Solution {
public:
    int t[1001][1001];

    bool solve(string &str, int i, int j, int n) {
        if(i >= j) {  // ✅ Correct base condition
            return 1;
        }
        if(t[i][j] != -1) {
            return t[i][j];  // ✅ Return memoized result
        }
        if(str[i] == str[j]) {
            return t[i][j] = solve(str, i + 1, j - 1, n);  // ✅ Recursive logic
        }

        return t[i][j] = 0;
    }

    string longestPalindrome(string s) {
        memset(t, -1, sizeof(t));  // ✅ Correct `memset` usage
        int maxi = 0;
        string ans = "";

        for(int i = 0; i < s.length(); i++) {
            for(int j = i; j < s.length(); j++) {
                if(solve(s, i, j, s.length())) {  // ✅ Pass original string `s`
                    if((j - i + 1) > maxi) {
                        maxi = j - i + 1;
                        ans = s.substr(i, j - i + 1);  // ✅ Correct substring logic
                    }
                }
            }
        }
        return ans;
    }
};