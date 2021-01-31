/*  Comparision Operation & If-Else

This introduces different comparison operators such as ==, !=, >, <, etc that can be used in C++ and which data types they can be applied to.

The conditions tested are specified using comparison operators. These operators cause the immediate statement in which they are contained to return a Boolean value of either true or false.

The following comparison operators are available:

Equality: ==, or Inequality: != of any primitive data type (int, char, float, bool, etc.) These are binary operators (take two operands) and are specified using infix notation (which means that the operator goes in between the two operands).
Greater-than: >, Greater than or equal to: >=, Less-than: < and Less than or equal to: <= are also binary operators using infix notation. Use only with numeric data types; there are specific functions for comparing other data types.
Negation: ! is a unary operator, and prefixes the operand.
Examples
Statement	Result
10 == 10	true
9 != 6	true
!true	false
10 > 12	true
 

Now that you’re familiar with the comparison operators let’s look at the conditional statements.

As the name implies, conditional statements specify whether another statement or block of statements should be executed or not. These are often called “selection constructs”. The two general types are:

"if…then"
the "switch…case" construct
if, if-else and Nested if…else
There are three forms of if…else statements in C++.

if statement
if...else statement
if...else if...else statement
if statement

The syntax of the if statement is:

if (condition) {
   // body of if statement
}
The if statement evaluates the condition inside the parentheses ( ).

If the condition evaluates to true, the code inside the body of if is executed.
If the condition evaluates to false, the code inside the body of if is skipped.
Example:

int num1 = 0, num2 = 1;
if(num1 == 0){
    cout<<"num1 is equal to 0"<<endl;
}
if(num2 == 0){
    cout<<"num2 is equal to 0"<<endl;
}
// Body of first if is executed.
// prints num1 is equal to 0
if…else statement

The if statement can have an optional else clause. Its syntax is:

if (condition) {
    // block of code if condition is true
}
else {
    // block of code if condition is false
}
If the condition evaluates true,

the code inside the body of if is executed
the code inside the body of else is skipped from execution
If the condition evaluates false,

the code inside the body of else is executed
the code inside the body of if is skipped from execution
Example:

int num = 1;
if(num == 0){
    cout<<"num is equal to 0"<<endl;
}
else{
    cout<<"num is not equal to 0"<<endl;
}
// Body of else is executed.
// prints num is not equal to 0
if…else…else if statement

The if...else statement is used to execute a block of code among two alternatives. However, if we need to make a choice between more than two alternatives, we use the if...else if...else statement.

The syntax of the if...else if...else statement is:

if (condition1) {
    // code block 1
}
else if (condition2){
    // code block 2
}
else {
    // code block 3
}
Here,

If condition1 evaluates to true, the code block 1 is executed.
If condition1 evaluates to false, then condition2 is evaluated.
If condition2 is true, the code block 2 is executed.
If condition2 is false, the code block 3 is executed
Example:

int num = 0;
if(num > 0){
    cout<<"num is greater than 0"<<endl;
}
else if(num < 0){
    cout<<"num is lesser than 0"<<endl;
}
else{
   cout<<"num is equal to 0"<<endl;
}
// Body of else is executed.
// prints num is not equal to 0
Try the following example in the editor below.

Given an integer num denoting percentage of a student, calculate the grade according to the below rules:

If num >= 90, grade A.
If num >= 80, grade B.
If num >= 70, grade C.
If num >= 60, grade D.
If num >= 50, grade E.
Else grade will be F.
Print a string consisting of single character denoting the grade.

Sample Input

59
Sample Output

E
*/



#include<iostream>

using namespace std;

int main()  {
    int num;
    cin>>num;
    char grade;
    // Your code goes here
    if (num >= 90) grade='A';
    else if (num >= 80) grade='B';
    else if (num >= 70) grade='C';
    else if (num >= 60) grade='D';
    else if (num >= 50) grade='E';
    else grade='F';
    cout<<grade<<endl;
    return 0;
}
