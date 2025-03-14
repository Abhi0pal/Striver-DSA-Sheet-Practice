class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.length();
        string result = "";
        vector<bool> taken(26, false); // Corrected the size to 26 for lowercase English letters
        vector<int> lastIndex(26);     // Corrected the size to 26

        // Step 1: Store the last occurrence index of each character
        for(int i = 0; i < n; i++) {
            lastIndex[s[i] - 'a'] = i;
        }

        // Step 2: Build the result string
        for(int i = 0; i < n; i++) {
            char ch = s[i];

            // Skip if character is already in result
            if (taken[ch - 'a']) continue;  

            // Remove characters from the result if:
            // 1. Result is not empty
            // 2. Last character in result is lexicographically larger
            // 3. The last occurrence of that character is later in the string
            while (!result.empty() && result.back() > ch && lastIndex[result.back() - 'a'] > i) {
                taken[result.back() - 'a'] = false;
                result.pop_back();
            }

            // Add the current character to result and mark it as taken
            result.push_back(ch);
            taken[ch - 'a'] = true;
        }

        return result;
    }
};