class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int i = 0, j = 0;
        int a = nums1.length, b = nums2.length;
        int[] nums3 = new int[a + b];

        // Merging two sorted arrays
        while (i < a && j < b) {
            if (nums1[i] <= nums2[j]) {
                nums3[i + j] = nums1[i++];
            } else {
                nums3[i + j] = nums2[j++];
            }
        }

        // Copy remaining elements of nums1
        while (i < a) {
            nums3[i + j] = nums1[i++];
        }

        // Copy remaining elements of nums2
        while (j < b) {
            nums3[i + j] = nums2[j++];
        }

        // Finding the median
        int n = a + b;
        if (n % 2 == 1) {
            return nums3[n / 2]; // Odd case
        }
        return (nums3[n / 2] + nums3[(n - 1) / 2]) / 2.0; // Even case
    }
}
