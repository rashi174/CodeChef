/*
In computer programming, loops are used to repeat a block of code.

For example, let’s say we want to show a message 100 times. Then instead of writing the print statement 100 times, we can use a loop.

That was just a simple example; we can achieve much more efficiency and sophistication in our programs by making effective use of loops.

There are 3 types of loops in C++.

for loop
while loop
do...while loop
for loop
The syntax of for-loop is:

for (initialization; condition; update) {
    // body of-loop 
}
Here,

initialization - initializes variables and is executed only once
condition - if true, the body of for loop is executed, if false, the for loop is terminated
update - updates the value of initialized variables and again checks the condition
Flowchart of for Loop



Example:

for(int i = 1; i <= 5; i++){
   cout<<i<<" ";
}
// Prints 1 2 3 4 5 
While loop
The syntax of while loop is:

while (condition) {
    statememt(s);
}
Here, statement(s) may be a single statement or a block of statements. The condition may be any expression, and true is any non-zero value. The loop iterates while the condition is true.

When the condition becomes false, program control passes to the line immediately following the loop.

Flowchart of while Loop



Example:

int i = 1;

while(i <= 5){
    cout<<i<<" ";
    i++;
}
// Prints 1 2 3 4 5 
do…while loop
The do…while loop is nearly identical to the while loop, but instead of checking the conditional statement before the loop starts, the do…while loop checks the conditional statement after the first run, then continuing onto another iteration.

The syntax of do...while loop is:

do {
  //body
} while (condition);
Flowchart of do…while loop



Example:

int i = 1;
do {
    cout << i << " ";
    i++;
} while(i <= 5);   // the contition is being checked after the first run
When is do-while used?
A do-while loop is used where your loop should execute at least one time.

For example, let’s consider a scenario where we want to take an integer input from the user until the user has entered a positive number.
In this case, we will use a do-while as we have to run loop at-least once because we want input from user at-least once. This loop will continue running until the user enters a positive number.

Try the following example in the editor below.

You are given an integer N, print all the odd values, for all i, where 0 <= i < N. Print each values on a seperate line.

*/


#include<iostream>

using namespace std;

int main()  {
    int N;
    cin>>N;
    // YOUR CODE GOES HERE
    for(int i=1;i<N;i+=2){
        cout<<i<<endl;
    }
    
    return 0;
}
