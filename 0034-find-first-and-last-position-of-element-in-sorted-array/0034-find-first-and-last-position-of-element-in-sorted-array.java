class Solution {
    public int[] searchRange(int[] nums, int target) {
        if(nums.length==0){
            return new int[]{-1,-1};
        }
        int first=firstOccurence(nums,target);
        int last=lastOccurence(nums,target);
        return new int[]{last,first};
    }
    public int firstOccurence(int[] arr,int target){
        int low=0;
        int high=arr.length-1;
        int result=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                result=mid;
                low=mid+1;//right
            }
            else if(arr[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return result;

    }
    public int lastOccurence(int[] arr,int target){
        int low=0;
        int high=arr.length-1;
        int result=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                result=mid;
                high=mid-1;//right
            }
            else if(arr[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return result;

    }
}