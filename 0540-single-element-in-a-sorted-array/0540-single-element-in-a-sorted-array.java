class Solution {
    public int singleNonDuplicate(int[] nums) {
        HashMap<Integer,Integer>mpp=new HashMap<>();
        for(int i:nums){
            mpp.put(i,mpp.getOrDefault(i,0)+1);
        }
        int freq=Integer.MAX_VALUE;
        int value=-1;
        for(int i=0;i<nums.length;i++){
            if(mpp.get(nums[i])<freq){
                freq=mpp.get(nums[i]);
                value=nums[i];
            }
        }
        return value;
        
    }
}