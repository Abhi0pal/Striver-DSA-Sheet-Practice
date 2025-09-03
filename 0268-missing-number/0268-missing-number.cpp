class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        bool flag=false;
        for(int i=0;i<=n;i++){
            flag=false;
            for(int j=0;j<n;j++){
                if(nums[j]==i){
                    flag=true;
                }
            }
            if(!flag){
                return i;
            }

        }
        return -1;
        
    }
};