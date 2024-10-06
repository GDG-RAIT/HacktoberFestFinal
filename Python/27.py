'''
You are given a 0-indexed integer array nums of size 3 which can form the sides of a triangle.

A triangle is called equilateral if it has all sides of equal length.
A triangle is called isosceles if it has exactly two sides of equal length.
A triangle is called scalene if all its sides are of different lengths.
Return a string representing the type of triangle that can be formed or "none" if it cannot form a triangle.

 

Example 1:

Input: nums = [3,3,3]
Output: "equilateral"
Explanation: Since all the sides are of equal length, therefore, it will form an equilateral triangle.
Example 2:

Input: nums = [3,4,5]
Output: "scalene"
Explanation: 
nums[0] + nums[1] = 3 + 4 = 7, which is greater than nums[2] = 5.
nums[0] + nums[2] = 3 + 5 = 8, which is greater than nums[1] = 4.
nums[1] + nums[2] = 4 + 5 = 9, which is greater than nums[0] = 3. 
Since the sum of the two sides is greater than the third side for all three cases, therefore, it can form a triangle.
As all the sides are of different lengths, it will form a scalene triangle.
 

Constraints:

nums.length == 3
1 <= nums[i] <= 100
'''
def check(a):
    a=list(a)
    if(a[0]+a[1]>a[2] and a[1]+a[2]>a[0] and a[0]+a[2]>a[1]):
        if(a[0]==a[1] and a[0]==a[2]):
            print("It is an equivalateral triangle")
        elif(a[0]==a[1] or a[0]==a[2] or a[1]==a[2]):
            print("It is an isoceles triangle")
        else:
            print("It is an scalene triangle")
    else:
        print("It is not a triangle")
b=int(input("enter first side"))
c=int(input("enter second side"))
d=int(input("enter third side"))
a=[b,c,d]
check(a)