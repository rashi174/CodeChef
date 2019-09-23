"""
link:https://www.codechef.com/problems/FLOW004



First and Last Digit Problem Code: FLOW004

 
All submissions for this problem are available.
If Give an integer N . Write a program to obtain the sum of the first and last digit of this number.

Input
The first line contains an integer T, total number of test cases. Then follow T lines, each line contains an integer N.

Output
Display the sum of first and last digit of N.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
3 
1234
124894
242323

Output
5
5
5
"""

# cook your dish here
list1=[]
n=int(input())
for _ in range(0,n):
    num=input()
    list1.append(num)
for item in list1:
    x=item[-1]
    y=item[0]
    x=int(x)
    y=int(y)
    print(x+y)