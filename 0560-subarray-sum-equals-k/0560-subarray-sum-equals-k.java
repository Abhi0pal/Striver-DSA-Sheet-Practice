class Solution {
    public int subarraySum(int[] nums, int k) {
        //Brute Force Approaches

        // int count=0;
        // for(int i=0;i<nums.length;i++){
        //     int sum=0;
        //     for(int j=i;j<nums.length;j++){
        //         sum+=nums[j];
        //         if(sum==k){
        //             count++;
                    
        //         }
        //     }
        // }
        // return count;

        //Optimal PrefixSum Appraoch 
        HashMap<Integer,Integer>mpp=new HashMap<>();
        mpp.put(0,1);
        int prefixSum=0;
        int count=0;
        for(int i=0;i<nums.length;i++){
            prefixSum+=nums[i];
            if(mpp.containsKey(prefixSum-k)){
                count+=mpp.get(prefixSum-k);
            }
            mpp.put(prefixSum,mpp.getOrDefault(prefixSum,0)+1);
        }
        return count;
        
    }
}