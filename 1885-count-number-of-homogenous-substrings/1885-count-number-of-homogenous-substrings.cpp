class Solution {
public:
    int countHomogenous(string s) {
        int len=0;
        long long res=0;
        const int MOD=1e9+7;
        for(int i=0;i<s.length();i++){
            if(i>0&&s[i]==s[i-1]){
                len++;
            }
            else{
                len=1;
            }
            res=(res+len)%MOD;
        }
        return res;
    }
};