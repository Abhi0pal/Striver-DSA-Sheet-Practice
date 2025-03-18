class Solution {
public:
    bool backspaceCompare(string s, string t) {
         string s_str="";
        string t_str="";
        for(auto& i:s){
            if(i=='#' &&!s_str.empty()){
                s_str.pop_back();
        }
        else if(i!='#'){
            s_str+=i;
            }
        }
        for(auto& i:t){
            if(i=='#' &&!t_str.empty()){
                t_str.pop_back();
            }
            else if(i!='#'){
                t_str+=i;
            }
        }
    return s_str==t_str;
        
    }
};