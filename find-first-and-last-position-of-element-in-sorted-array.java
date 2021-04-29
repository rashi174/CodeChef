/*

34. Find First and Last Position of Element in Sorted Array

Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.
If the target is not found in the array, return [-1, -1].
Follow up: Could you write an algorithm with O(log n) runtime complexity?

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
 

Constraints:

0 <= nums.length <= 105
-109 <= nums[i] <= 109
nums is a non-decreasing array.
-109 <= target <= 109
*/


class Solution {
    public int[] searchRange(int[] nums, int target)
    {
        int index = -1,index2=-1;
        boolean flag=false;
        for(int i=0;i<nums.length;i++)
        {
            if (flag==true && nums[i]==target){
                index2=i;
            }
            else if (nums[i]==target){
                flag=true;
                index=i;
            }
        }
        if (index2==-1 && index!=-1)
            index2=index;
        int res[]={index,index2};
        return res;
    }
}
