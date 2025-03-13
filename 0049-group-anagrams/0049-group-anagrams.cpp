class Solution {
public:
    bool anagram(string str1,string str2){
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        return str1==str2;

    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
       vector<vector<string>> str;
        for(string i:strs){
            string sorted=i;
            sort(sorted.begin(),sorted.end());
            mpp[sorted].push_back(i);
        }
        for(auto &i:mpp){
            str.push_back(i.second);
        }
        return str;

        
    }
};