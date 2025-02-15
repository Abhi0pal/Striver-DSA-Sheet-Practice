class Solution {
    public int beauty(HashMap<Character,Integer>mpp,String s){
         int lf = Integer.MAX_VALUE; // Correct initialization for min frequency
        int mf = Integer.MIN_VALUE;
        for(int freq:mpp.values()){
            mf= Math.max(mf, freq);
            lf=Math.min(lf, freq);
        }
        return mf-lf;

    }
    public int beautySum(String s) {
        int result=-0;
        for(int i=0;i<s.length();i++){
            HashMap<Character,Integer>mpp=new HashMap<>();
            for(int j=i;j<s.length();j++){
                mpp.put(s.charAt(j),mpp.getOrDefault(s.charAt(j),0)+1);
                result+=beauty(mpp,s);
            }
        }
        return result;
    }
}