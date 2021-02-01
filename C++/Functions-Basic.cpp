/*
A function is a segment of code that is isolated from the main code segment. A function is called from a section of code. When the function’s code has been executed, it returns to the calling code.

The general form of a function is:

return_type function_name ([arg1_type arg1_name, ...]) { code }
Example:

int addTwoInts(int arg1, int arg2) //function takes two integers arg1,arg2
{
   int sum = arg1 + arg2;    // adding both integers together to compute sum
   return sum;    // retuns the sum of type int which is same as function type
}

int main() {
  int answer = addTwoInts(2,4);   //calling our addTwoInts function in main()
  cout << "Answer is: " << answer << endl;
  return 0;
}
Declaration of Function
Before we discuss calling functions, we must talk about declarations. Programs written in C++ are executed in logical order from the top down. A statement can only use symbols, or named constructs like functions, that are declared in code that has already been executed.
Simply put; the compiler must be aware of the name used to describe a function before that function can be called in the code.

For example, to allow main to call functions that are defined after the main function itself in the code, we use forward declarations. A forward declaration tells the compiler that a function exists and what its arguments look like, but the definition of the function will be elsewhere.

The declaration begins much the same as the definition.

Example:

// Definition
int fctn2(int num1, int num2)
{ ... }

// Declaration
int fctn2(int, int);
Note: that the argument names are optional since the declaration does not need to use the arguments in any way. However, keeping the arguments needed in the declaration may be useful for documentation purposes.

Calling
Calling refers to how a function is used from code.

Let’s take a look at how functions that have already been made are called in the main function.

void fctn1();    // declaring a void function
int fctn2(int, int);   //declaring int type function taking two int arguments

int main()
{
    int sum;

    fctn1();        //calling the void function 
    sum = fctn2(2,3);    // calling the function fctn and saving the value returned in variable 'sum'
    cout << "The value of sum is: " << sum << endl;
    return 0;
}

void fctn1()      // writing the function definition here 
{
    cout << "This is function 1!" << endl;  // function only couts a string
}

int fctn2(int num1, int num2)    // writing the function definition 
{
    //the value 2 has been passed as num1
    //the value 3 has been passed as num2

    return num1 + num2;      // returning the sum of num1 and num2
}
Parameters
Parameters are how data is passed between functions through the call of the function.

We learned earlier that we list the data we want to pass to a function in the call between the ( ). The order of the list is determined by the function definition. The first parameter in the list will be assigned to the variable listed first in the function definition.

Example:

int fctn(int arg1, int arg2);

int main()
{
   int answer;
   int num1 = 10;
   answer = fctn(num1, 12);    // num1 and 12 are arguments passed to fctn
   cout << "Answer is: " << answer << endl;
}

int fctn(int arg1, int arg2)    // function definition
{
  cout << "num1 is assigned to arg1, value of arg1 is: "<<arg1<<endl;
  cout << "12 is assigned to arg2, value of arg2 is: "<<arg2<<endl;
  return arg1*arg2;      // mutliplying arg1 and arg2 and returning the answer
}
As you can see above, the contents of the variable num1 are passed to arg1 and the integer value 12 is passed to arg2. The function fctn then returns the product after performing multiplication operation on arg1 and arg2.

Try the following example in the editor below.

Create a function named “compute” which takes two integer arguments A and B and returns an integer denoting A2 + B2.



*/

/*
#include<iostream>
using namespace std;
*/

// Your Code goes here
int compute(int A ,int B){
    return A*A + B*B;
}




/*
int main()  {
    int A, B;
    cin>>A>>B;
    cout<<compute(A, B)<<endl;
    return 0;
}
*/
