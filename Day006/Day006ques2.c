// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

 

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:

// Input: nums = [0]
// Output: [0]
 

// Constraints:

// 1 <= nums.length <= 104
// -231 <= nums[i] <= 231 - 1
 

// Follow up: Could you minimize the total number of operations done?

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int nums[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int k = 0;

    // Move non-zero elements forward
    for(int i = 0; i < n; i++) {
        if(nums[i] != 0) {
            nums[k] = nums[i];
            k++;
        }
    }

    // Fill remaining positions with zero
    for(int i = k; i < n; i++) {
        nums[i] = 0;
    }

    // Print result
    for(int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
