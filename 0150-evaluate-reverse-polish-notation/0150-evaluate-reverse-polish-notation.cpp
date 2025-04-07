class Solution {
public:
    int evalRPN(vector<string>& tok) {
        stack<int>st;
        for(int i=0;i<tok.size();i++){
            if(tok[i]=="*"||tok[i]=="+"||tok[i]=="/"||tok[i]=="-")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int res;
                if(tok[i]=="*"){
                    res=a*b;
                } 
                else if(tok[i]=="-"){
                    res=b-a;
                }
                else if(tok[i]=="/"){
                    res=b/a;
                }
                else if(tok[i]=="+"){
                    res=a+b;
                }
                st.push(res);
            }
            else{
                int num=stoi(tok[i]);
                st.push(num);
            }
        }
        return st.top();
        
    }
};