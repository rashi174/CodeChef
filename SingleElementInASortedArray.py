'''
Find the element that appears once in sorted array 

Given a sorted array arr[] of size N. Find the element that appears only once in the array. All other elements appear exactly twice. 

Example 1:

Input:
N = 11
arr[] = {1, 1, 2, 2, 3, 3, 4, 50, 50, 65, 65}
Output: 4
Explanation: 4 is the only element that 
appears exactly once.
 

Your Task:  
You don't need to read input or print anything. Complete the function findOnce() which takes sorted array and its size as its input parameter and returns the element that appears only once. 


Expected Time Complexity: O(log N)
Expected Auxiliary Space: O(1)

 

Constraints:
-105 <= N <= 105


'''

#User function Template for python3

class Solution:
    def findOnce(self,nums : list, n : int):
        
        #Binary Search 
        
        low=0
        high=n-1
        if n==1:
            return nums[0]
        
        #Boundary checks
        if nums[low]!=nums[low+1]:
            return nums[low]
        if nums[high]!=nums[high-1]:
            return nums[high]
        
        while low<=high:
            mid=low+(high-low)//2
            if nums[mid]!=nums[mid+1] and nums[mid]!=nums[mid-1]:
                return nums[mid]
            if (mid%2==0 and nums[mid]==nums[mid+1]) or (mid%2==1 and nums[mid]==nums[mid-1]):
                low=mid+1
            else:
                high=mid-1
                
