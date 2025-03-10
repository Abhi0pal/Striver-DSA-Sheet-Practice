class Solution {
public:
    int compress(vector<char>& chars) {
        int index=0;
        char ch=chars[0];
        int count=0;
        for(int i=0;i<chars.size();i++){
            if(chars[i]==ch){
                count++;
            }
            else{
                chars[index++]=ch;
                if(count>1){
                    string str=to_string(count);
                    for(char &j:str){
                        chars[index++]=j;
                    }

                }
                count=1;
                ch=chars[i];
            }
        }
        chars[index++]=ch;
        if(count>1){
                string str=to_string(count);
                for(char &j:str){
                    chars[index++]=j;
                }

        }

        
        return index;
        

        
    }
};