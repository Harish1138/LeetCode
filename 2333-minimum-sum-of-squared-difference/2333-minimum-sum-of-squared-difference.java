import java.util.*;

class Solution {
    public long minSumSquareDiff(int[] nums1, int[] nums2, int k1, int k2) {
        int n = nums1.length;
        long k = (long) k1 + k2;
        long[] diff = new long[n];

        long maxDiff = 0;

        for (int i = 0; i < n; i++) {
            diff[i] = Math.abs((long) nums1[i] - nums2[i]);
            maxDiff = Math.max(maxDiff, diff[i]);
        }

        long total = 0;
        for (long d : diff) {
            total += d;
        }

        if (k >= total) return 0;

        long left = 0, right = maxDiff;

        while (left < right) {
            long mid = left + (right - left) / 2;
            long required = 0;

            for (long d : diff) {
                if (d > mid) {
                    required += d - mid;
                }
            }

            if (required <= k) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        long remaining = k;

        for (int i = 0; i < n; i++) {
            if (diff[i] > left) {
                remaining -= diff[i] - left;
                diff[i] = left;
            }
        }

        // Use any remaining operations to reduce values at the threshold.
        for (int i = 0; i < n && remaining > 0; i++) {
            if (diff[i] == left && left > 0) {
                diff[i]--;
                remaining--;
            }
        }

        long ans = 0;
        for (long d : diff) {
            ans += d * d;
        }

        return ans;
    }
}