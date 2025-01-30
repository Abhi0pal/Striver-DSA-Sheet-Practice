class Solution {
    public int check(int[] nums,int thres){
        int sum=0;
        for(int i:nums){
            sum += Math.ceil((double) i / thres);

        }
        return sum;

    }
     public int largest(int[] arr) {
        int maxi = 0; 
        for (int i : arr) { 
            maxi = Math.max(i, maxi); 
        }
        return maxi; 
    }
    public int smallestDivisor(int[] nums, int threshold) {
        int low =1;
        int high=largest(nums);
        int result=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(nums,mid)<=threshold){
                result=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return result;
    }
}