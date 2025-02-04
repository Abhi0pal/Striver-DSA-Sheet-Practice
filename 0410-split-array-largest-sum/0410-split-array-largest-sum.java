class Solution {


    public static boolean isPossible(int[] arr,int m,int mid){
        int page=0;
        int studentCount=1;
        for(int i:arr){
            if(i+page<=mid){
                page+=i;
            }
            else{
                studentCount++;
                
                if(studentCount>m||i>mid){
                    return false;
                }
                page=i;
            }
        }
        return true;

    } 
    public int splitArray(int[] nums, int k) {
        int maxiOfArray=0;
        int sum=0;
        for(int i:nums){
            maxiOfArray=Math.max(maxiOfArray,i);
            sum+=i;
        }
        int low=maxiOfArray;
        int high=sum;
        int ans=-1;
        while(low<=high){
            int mid =low+(high-low)/2;
            if(isPossible(nums,k,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
        
    }
}