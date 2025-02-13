class Solution {
    public int myAtoi(String s) {
        s = s.trim(); // Remove leading spaces
        if (s.isEmpty()) return 0; // Handle empty string case

        int sign = 1, i = 0;
        if (s.charAt(0) == '-' || s.charAt(0) == '+') {
            sign = (s.charAt(0) == '-') ? -1 : 1;
            i++; // Skip sign
        }

        long num = 0;
        while (i < s.length() && s.charAt(i) >= '0' && s.charAt(i) <= '9') {
            num = num * 10 + (s.charAt(i) - '0');
               if (num * sign > Integer.MAX_VALUE) return Integer.MAX_VALUE;
            if (num * sign < Integer.MIN_VALUE) return Integer.MIN_VALUE;

           

            i++;
        }

        return (int) (sign * num);
    }
}
