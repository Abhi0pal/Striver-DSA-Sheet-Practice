class Solution {
    /**
     * Converts a given string to a 32-bit signed integer (atoi implementation).
     * 
     * The function follows these rules:
     * 1. Ignores leading whitespace.
     * 2. Determines the sign if the first non-space character is '+' or '-'.
     * 3. Reads digits and converts them to an integer until a non-digit character is found.
     * 4. Handles overflow by returning Integer.MAX_VALUE or Integer.MIN_VALUE if the number exceeds limits.
     *
     * @param s The input string.
     * @return The converted integer, clamped to 32-bit integer limits if necessary.
     */
    public int myAtoi(String s) {
        // Step 1: Trim leading and trailing whitespace
        s = s.trim();

        // Step 2: Handle empty string case
        if (s.isEmpty()) return 0;

        int sign = 1; // Default sign is positive
        int i = 0;    // Pointer to traverse the string

        // Step 3: Check for sign at the beginning
        if (s.charAt(0) == '-' || s.charAt(0) == '+') {
            sign = (s.charAt(0) == '-') ? -1 : 1; // Update sign based on the character
            i++; // Move to the next character
        }

        long num = 0; // Store the converted number as long to handle overflow

        // Step 4: Iterate over numeric characters
        while (i < s.length() && s.charAt(i) >= '0' && s.charAt(i) <= '9') {
            num = num * 10 + (s.charAt(i) - '0'); // Convert character to digit and update num

            // Step 5: Check for integer overflow
            if (num * sign > Integer.MAX_VALUE) return Integer.MAX_VALUE;
            if (num * sign < Integer.MIN_VALUE) return Integer.MIN_VALUE;

            i++; // Move to the next character
        }

        // Step 6: Return final result with the correct sign
        return (int) (sign * num);
    }
}
