int dp[202][10002]; //[index][sum]
class Solution {
public:
    bool helper(vector<int>&nums,int target,int size){
        if(target==0){
            return true;
        }
        if(dp[size][target]!=-1){
            return dp[size][target];
        }
        if(size==0){
            return nums[size]==target;
        }
        bool notTake=helper(nums,target,size-1);
        bool take=false;
        if(nums[size]<=target){
            take=helper(nums,target-nums[size],size-1);
        }
        return dp[size][target]=take||notTake;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2==0){
            return helper(nums,sum/2,nums.size()-1);
        }
        else{
            return false;
        }
        
    }
};