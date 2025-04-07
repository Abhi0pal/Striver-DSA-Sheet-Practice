class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(st.size()>0&&st.top()==s[i]){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
        string res="";
        while(st.size()>0){
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};