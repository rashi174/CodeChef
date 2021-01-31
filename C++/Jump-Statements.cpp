/*
Jump statements are used to interrupt the normal flow of program.

Types of Jump Statements

break
continue
goto
Break Statement
The break statement is used inside loop or switch statement. When compiler finds the break statement inside a loop, compiler will abort the loop and continue to execute statements followed by loop.

Example:

int a = 1;  

while(a <= 10)  
{  
    if(a==5)  
        break;  
    a++;  
}  
cout << "Value of a is " <<a<<endl;  
// Value of a is 5
Continue Statement
The continue statement is also used inside loop. When compiler finds the continue statement inside a loop, compiler will skip all the followling statements in the loop and resume the loop.

Example:

int a = 0;  
while(a < 10)  
{  
    a++;  
    if(a == 5)  
        continue;  

    cout << a << " ";  
}  
// prints 1 2 3 4 6 7 8 9 10 
Goto Statement
The goto statement is a jump statement which jumps from one point to another point within a function.

The syntax of the goto statement in C++ is:

goto label;  
... .. ...  
... .. ...  
... .. ...  
label:   
statement;  
... .. ...
In the syntax above, label is an identifier. When goto label; is encountered, the control of program jumps to label: and executes the code below it.



Example:

num = 10      
if (num % 2 == 0)   
    // jump to even   
    goto even;    
else  
    // jump to odd   
    goto odd;    

even:   
    cout << num << " is even";   
    // return if even   
    return;    
odd:   
    cout << num << " is odd"; 
You can write any C++ program without the use of goto statement and is generally considered a good idea not to use them.

Reason to Avoid goto Statement

The goto statement gives power to jump to any part of program but, makes the logic of the program complex and tangled.

In modern programming, goto statement is considered a harmful construct and a bad programming practice.

The goto statement can be replaced in most of C++ program with the use of break and continue statements.

Try the following example in the editor below.

You are given an integer N, print all the odd values, for all i, where 0 <= i < N. Print each values on a seperate line.
Note: Use continue statement

*/

#include<iostream>

using namespace std;

int main()  {
    int N;
    cin>>N;
    // YOUR CODE GOES HERE
    for(int i=0;i<N;i++){
        if (i%2==0) continue;
        cout<<i<<endl;
    }
    
    return 0;
}
