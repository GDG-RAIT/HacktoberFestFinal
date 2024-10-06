// Remove One Element to Make the Array Strictly Increasing

// Given a 0-indexed integer array nums, return true if it can be made strictly increasing after removing exactly one element, or false otherwise. If the array is already strictly increasing, return true.

// The array nums is strictly increasing if nums[i - 1] < nums[i] for each index (1 <= i < nums.length).

// Example 1:
// Input: nums = [1,2,10,5,7]
// Output: true
// Explanation: By removing 10 at index 2 from nums, it becomes [1,2,5,7].
// [1,2,5,7] is strictly increasing, so return true.

// Example 2:
// Input: nums = [2,3,1,2]
// Output: false
// Explanation:
// [3,1,2] is the result of removing the element at index 0.
// [2,1,2] is the result of removing the element at index 1.
// [2,3,2] is the result of removing the element at index 2.
// [2,3,1] is the result of removing the element at index 3.
// No resulting array is strictly increasing, so return false.

// Example 3:
// Input: nums = [1,1,1]
// Output: false
// Explanation: The result of removing any element is [1,1].
// [1,1] is not strictly increasing, so return false.
 
#include <stdio.h>
#include <stdbool.h>

bool canBeIncreasing(int* nums, int numsSize) {
    int count = 0;  // Count the number of elements we need to remove
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] <= nums[i - 1]) {
            count++;
            // If more than one element needs to be removed, return false
            if (count > 1) 
               return false;
    
            // Check if we can remove nums[i] or nums[i - 1]
            if (i > 1 && nums[i] <= nums[i - 2] && (i + 1 >= numsSize || nums[i + 1] <= nums[i - 1])) {
                // If removing nums[i] doesn't work, we must remove nums[i - 1]
                nums[i - 1] = nums[i];  // "Remove" nums[i - 1] by replacing it
            }
        }
    
}
    
    // If we reach here, we can remove at most one element
    if(count <= 1)
        printf("True");
    else
        printf("False");
        
    return count <= 1;
}

int main(){
    int test[] = {1,2,10,5,7};
    
    canBeIncreasing(test, 5);
}

