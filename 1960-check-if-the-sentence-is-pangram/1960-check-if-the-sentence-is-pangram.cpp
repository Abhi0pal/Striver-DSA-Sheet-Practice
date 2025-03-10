class Solution {
public:
    bool checkIfPangram(string sen) {
        vector<int>arr(26,0);
        for(int i=0;i<sen.length();i++){
            int index=sen[i]-'a';
            arr[index]++;
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                return false;
            }
        }
        return true;
    }
};