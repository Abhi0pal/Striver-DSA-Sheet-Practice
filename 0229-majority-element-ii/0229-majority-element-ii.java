class Solution {
    public List<Integer> majorityElement(int[] nums) {
        HashMap<Integer,Integer>mpp=new HashMap<>();
        List<Integer>ll=new ArrayList<>();
        int n=nums.length;
        int mini = (int)(n / 3) + 1;
        for(int i:nums){
            mpp.put(i,mpp.getOrDefault(i,0)+1);
            if(mpp.get(i)==mini){
                ll.add(i);
            }
        }
        return ll;
        
    }
}