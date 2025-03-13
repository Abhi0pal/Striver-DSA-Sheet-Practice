class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        if (t.length() > n) {
            return "";
        }

        // t ke character ka count store kar liya 
        unordered_map<char, int> mpp;
        for (char &i : t) {
            mpp[i]++;
        }

        int requiredCount = t.length();
        int i = 0, j = 0;
        int minWindowSize = INT_MAX;
        int start_i = -1;

        // Sliding window logic
        while (j < n) {
            char ch = s[j];

            // ✅ Corrected condition to update `requiredCount`
            if (mpp[ch] > 0) {
                requiredCount--;
            }
            mpp[ch]--;

            while (requiredCount == 0) {
                int currWindowSize = j - i + 1;
                if (minWindowSize > currWindowSize) {
                    minWindowSize = currWindowSize;
                    start_i = i;
                }

                // ✅ Fixed: Correct condition for restoring character count
                mpp[s[i]]++;
                if (mpp[s[i]] > 0) {
                    requiredCount++;
                }
                i++;
            }
            j++;
        }

        return start_i == -1 ? "" : s.substr(start_i, minWindowSize);
    }
};

