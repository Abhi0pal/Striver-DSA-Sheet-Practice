class Solution {
    public int totalFruit(int[] fruits) {
        HashMap<Integer,Integer>mpp=new HashMap<>();
        int left =0;
        int right=0;
        int maxi=0;
        for(right=0;right<fruits.length;right++){
            mpp.put(fruits[right],mpp.getOrDefault(fruits[right],0)+1);
            while(mpp.size()>2){
                int fruitCount=mpp.get(fruits[left]);
                if(fruitCount==1){
                    mpp.remove(fruits[left]);
                }
                else{
                    mpp.put(fruits[left],fruitCount-1);
                }
                left++;
            }
            maxi=Math.max(maxi,right-left+1);
        }
        return maxi;
        
    }
}