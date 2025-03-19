class Solution {
public:
    int first(vector<int>& arr,int target){
        int n=arr.size();
        int low=0;
        int high=n-1;
        int mid=-1;
        int ans=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(arr[mid]==target){
                ans=mid;
                high=mid-1;
            }
            else if(arr[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;

    }
    int last(vector<int>& arr,int target){
        int n=arr.size();
        int low=0;
        int high=n-1;
        int mid=-1;
        int ans=-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(arr[mid]==target){
                ans=mid;
                low=mid+1;
            }
            else if(arr[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        // if(nums.size()==1){
        //     return {0,0};

        // }
        vector<int>arr;
        arr.push_back(first(nums,target));
        arr.push_back(last(nums,target));
        return arr;
        
    }
};