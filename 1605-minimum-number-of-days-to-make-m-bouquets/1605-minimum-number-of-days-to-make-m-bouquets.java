class Solution {
    public int largest(int[] arr){
        int maxi=0;
        for(int i:arr){
            maxi=Math.max(i,maxi);
        }
        return maxi;
    }
    public boolean windowBloom(int[] arr,int mid,int k,int m){
        int count=0;
        int bqt=0;
        for(int i:arr){
            if(i<=mid){
                count++;
                if(count==k){
                    bqt++;
                    count=0;
                    if(bqt==m) return true;
                }
            }
            else{
                count=0;
            }
        }
        return bqt>=m;

    }
    public int minDays(int[] bloomDay, int m, int k) {
        int low=1;
        int high=largest(bloomDay);
        int result=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(windowBloom(bloomDay,mid,k,m)){
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