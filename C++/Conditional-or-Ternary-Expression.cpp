/*
There are expressions of a special kind, the conditional expressions, these are not statements, but they are one sort of contraction of the if-then construct.

This kind of expression can help to produce highly readable assignment statements fitting onto one line of the source code.

Syntax:

( condition ) ? expressionIfTrue : expressionIfFalse;
First the condition is evaluated and the side effects of this evaluation carry out their impact on the local environment.

If the result is true then only the expressionIfTrue is evaluated (causing side effects) and this second result is the value of the whole conditional expression, and the expressionIfFalse is not evaluated (and hence cause no side effects).
If the condition evaluates to false, then the situation is converse, the resulting values is given by the evaluation of the false branch of the conditional expression, and the true branch is not evaluated.
A common use of the conditional expression is to assign the value x or y to a, depending on an easily decidable condition, say x>y.

Example:

int x = 7;
int y = 5;
int a = ( x > y ) ? x : y; // here we are using conditional expression to evaluate
cout << a << endl;
// The above conditional expression is equivalent to
/*
if (x > y){      // here we are usig if-else which will gave same output
    a = x;
    cout << a << endl;
}
else {
    a = y;
    cout << a << endl;
}
*/
Try the following example in the editor below.

Given two integer x and y, using Conditional or Ternary expression, print “Robin” if the value of x is less than or equal to y else print “Rahul” (without quotes).

Sample Input:

x = 10
y = 9
Sample Output:

Rahul


*/
#include<iostream>

using namespace std;

int main()  {
    int x, y;
    cin>>x>>y;
    // YOUR CODE GOES HERE
    string name;
    (x<=y) ? name="Robin":name="Rahul";
    cout<<name<<endl;
    return 0;
}
