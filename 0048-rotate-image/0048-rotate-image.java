class Solution {
    public void rotate(int[][] mat) {
        int n=mat.length;
        int[][] res=new int[n][n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                res[j][n-i-1]=mat[i][j];
            } 
        }
        //yaha  element daal diye wapas
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=res[i][j];
            } 
        }
    }
}