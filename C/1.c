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
#include <conio.h>
int nums[20];
int i,j,temp=0;
int enterArray(){
    for(i=0;i<5;i++)
    {
        printf("Enter [%d] element", i+1);
        scanf("%d",&nums[i]);
    }
    
    for(i=0;i<5;i++)
    {
        printf("%d\t",nums[i]);
    }
}


int canBeIncreasing(int numsSize) {
    //ascending order
    for(i=0;i<numsSize;i++)
    {
        for(j=0;j<)
            if(nums[i]>nums[i+1])
            {
                temp=nums[i];
                nums[i]=nums[i+1];
                nums[i+1]=temp;
            }
        
    }
    
    for(i=0;i<5;i++)
    {
        printf("%d", nums[i]);
    }
}


int main()
{
    printf("Hello World");
    enterArray();
    canBeIncreasing(3);
    return 0;
}
