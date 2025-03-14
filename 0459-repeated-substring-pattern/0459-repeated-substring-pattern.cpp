class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.length();
        int l=1;
        while(l<=n/2){
            string str="";
            string st=s.substr(0,l);
            if(n%l==0){
                int times=n/l;
                for(int i=1;i<=times;i++){
                    str=str+st;


                }
                if(str==s){
                    return true;
                }
            }
            l++;

        }
        return false;
    }
};