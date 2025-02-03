class Solution {
    public int maxOfArray(int[] weights){
        int maxi=0;
        for(int i:weights){
            maxi=Math.max(maxi,i);
        }
        return maxi;
    }
    public int sumOfArray(int[] weights){
        int sum=0;
        for(int i:weights){
            sum+=i;
        }
        return sum;
    }
    public int shipWithinDays(int[] weights, int D) {
        int low=maxOfArray(weights);
        int high=sumOfArray(weights);
        while(low<=high){
            int mid=low+(high-low)/2;
            int days=0;
            int sum=0;
            for(int i:weights){
                if(sum+i>mid){
                    days++;
                    sum=0;
                }
                sum += i;
            }
            days++;
            if(days>D){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
        
    }
}