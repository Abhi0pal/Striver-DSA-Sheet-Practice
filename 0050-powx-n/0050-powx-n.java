class Solution {
    public double myPow(double x, int n) {
        double ans = 1.0;
        long nm = (long) n; // Convert n to long to prevent overflow
        
        if (nm < 0) {
            nm = -nm; // Convert to positive
        }
        
        while (nm > 0) {
            if (nm % 2 == 1) {
                ans = ans * x;
                nm = nm - 1;
            } else {
                x = x * x;
                nm = nm / 2;
            }
        }
        
        if (n < 0) {
            ans = 1.0 / ans; // Correct handling of negative exponent
        }
        
        return ans;
    }
}
