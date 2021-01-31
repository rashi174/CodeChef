/*
switch..case Statement
The switch statement allows us to execute a block of code among many alternatives.

The syntax of the switch statement in C++ is:

switch (expression) {
    case constant1:
        // code to be executed if 
        // expression is equal to constant1;
        break;

    case constant2:
        // code to be executed if
        // expression is equal to constant2;
        break;
        .
        .
        .
    default:
        // code to be executed if
        // expression doesn't match any constant
}
The expression is evaluated once and compared with the values of each case label.

If there is a match, the corresponding code after the matching label is executed. For example, if the value of the variable is equal to constant2, the code after case constant2: is executed until the break statement is encountered.
If there is no match, the code after default: is executed.
Note: We can do the same thing with the if...else..if ladder. However, the syntax of the switch statement is cleaner and much easier to read and write.

Flowchart of switch Statement


Example:
int x = 2; 
switch (x) 
{ 
    case 1: 
        cout << "Choice is 1"; 
        break; 
    case 2: 
        cout << "Choice is 2"; 
        break; 
    case 3: 
        cout << "Choice is 3"; 
        break; 
    default: 
        cout << "Choice other than 1, 2 and 3"; 
        break; 
}
Notice that the break statement is used inside each case block. This terminates the switch statement.

If the break statement is not used, all cases after the correct case are executed.

Try the following example in the editor below.

Given the weekday number, print the weekday name corresponding to it.

Note: Day 1 is Monday. First letter is always Capital.

Sample Input

4
Sample Output

Thursday
*/

#include<iostream>

using namespace std;

int main()  {
    int weekday;
    cin>>weekday;
    // YOUR CODE GOES HERE

    switch (weekday) 
    { 
        case 1: 
            cout << "Monday"; 
            break; 
        case 2: 
            cout << "Tuesday"; 
            break; 
        case 3: 
            cout << "Wednesday"; 
            break;
        case 4: 
            cout << "Thursday"; 
            break;
        case 5: 
            cout << "Friday"; 
            break;
        case 6: 
            cout << "Saturday"; 
            break;
        case 7:
            cout << "Sunday"; 
            break; 
    }
        
        return 0;
}
