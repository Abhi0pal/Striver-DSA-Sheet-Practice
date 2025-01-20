class Solution {
    public List<List<Integer>> generate(int n) {
        List<List<Integer>>ll=new ArrayList<>();
        // ll.add(1);
        for(int row=0;row<n;row++){
            List<Integer>current =new ArrayList<>();
            int ans=1;
            current.add(ans);
            for(int col=1;col<=row;col++){
                ans=ans*(row-col+1)/(col);
                current.add(ans);
            }
            ll.add(current);
            
        }
        return ll;


        
    }
}