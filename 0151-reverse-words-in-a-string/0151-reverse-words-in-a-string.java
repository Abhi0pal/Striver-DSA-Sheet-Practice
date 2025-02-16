class Solution {
    public String reverseWords(String s) {
        StringBuilder sb=new StringBuilder();
        String[] str=s.split(" ");
        for(int i=str.length-1;i>=0;i--){
            if(!str[i].equals("")){
                sb.append(str[i]+" ");
            }
        }
        return sb.toString().trim();
    }
}