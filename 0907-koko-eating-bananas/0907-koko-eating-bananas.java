class Solution {
    public boolean isEat(int[] piles,int mid,int h){
        int hours=0;
        for(int i:piles){
            hours+=i/mid;
            if(i%mid!=0){
                hours++;
            }
        }
        return hours<=h;

    }
    public int maxElement(int[] piles){
        int maxi=0;
        for(int i:piles){
            maxi=Math.max(maxi,i);
        }
        return maxi;

    }
    public int minEatingSpeed(int[] piles, int h) {
        int low=1;
        int high=maxElement(piles);
        while(low<high){
            int mid=low+(high-low)/2;
            if(isEat(piles,mid,h)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
}