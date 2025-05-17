class Solution {
public:
    string makeGood(string s) {
        string str="";
        for(int i=0;i<s.length();i++){
            if(!str.empty()&&(str.back()+32==s[i]||str.back()-32==s[i])){
                str.pop_back();
            }
            else{
                str.push_back(s[i]);
            }
        }
        return str;
        
    }
};