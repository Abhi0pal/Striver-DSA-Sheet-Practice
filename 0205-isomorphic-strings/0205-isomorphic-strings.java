class Solution {
    public boolean isIsomorphic(String s, String t) {
        HashMap<Character,Character>mpp1=new HashMap<>();
        HashMap<Character,Character>mpp2=new HashMap<>();
        // mpp1.put(s.charAt(0),t.charAt(0));
        // mpp2.put(t.charAt(0),s.charAt(0));
        for(int i=0;i<s.length();i++){
            char ch1 = s.charAt(i);
            char ch2 = t.charAt(i);
            if(mpp1.containsKey(ch1)&&mpp1.get(ch1)!=ch2||mpp2.containsKey(ch2)&&mpp2.get(ch2)!=ch1){
                return false;
            }
            mpp1.put(ch1,ch2);
            mpp2.put(ch2,ch1);
        }
        return true;
    }
}