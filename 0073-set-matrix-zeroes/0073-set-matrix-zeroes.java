class Solution {
    public void setZeroes(int[][] mat) {
        int n=mat.length;
        int m=mat[0].length;
        boolean[] arrRow=new boolean[n];
        boolean[] arrCol=new boolean[m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    arrRow[i]=true;
                    arrCol[j]=true;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arrRow[i]||arrCol[j]){
                    mat[i][j]=0;
                }
            }
        }

        
    }
}