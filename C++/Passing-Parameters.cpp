/*
Passing Methods
Values can be passed to a function through two methods.

By default, values are passed to a function through a method called:

pass by value
This means that:

value of the variable is passed, not the variable itself.
This would be like giving a person a copy of your driver’s license. They can read all of your information, ​and they can change whatever they want on their copy, but the original is not altered in any way.

If desired, a value can be passed through the other method called:

pass by reference
This means that:

Function is actually given the address of the variable, allowing it direct access to the information.
Placing a & after the data type in the function definition allows direct access (this must also be present in any forward declaration).
Let’s look at an example to better understand the concept of passing values by reference.

void fctn(int& arg1, int arg2){ //passing argument 1 by reference using &
    arg1 = arg2;    //we equate arg1 to arg2
    //there is no return as void function
}

int main() {
    int num1 = 4; //intializing and decalring num1
    cout << "num1 before passing to fctn is: "<<num1<<endl; 
    fctn(num1,23); //passing num1 and 23 as arguments to fctn function
    cout << "Value of num1 (arg1 in function) is: "<<num1<<endl;
    return 0;
}
In the code above, we pass the argument arg1 by reference. This means that whatever changes we make to the arg1 value in fctn function will automatically be made to the argument num1 passed in main function.

Default Parameters
It’s possible to assign default values to parameters that are omitted from the function call. The default values are usually defined in the function declaration​ like this example:

int addTwoInts(int arg1 = 4, int arg2 = 5);
//In this case, if the parameters aren’t provided, they will be assigned 4 and 5 respectively.
Scope
Scope refers to the level of access an object has.

A function can access only global variables and those that are passed to it through arguments.

Note: Any variables declared inside a function are only available to that function.

Try the following example in the editor below.

Create a function named “compute” which takes three arguments A, B, C passed by reference and has a return type void.
Update the value of each integer to its respective cube i.e  A = A3, B = B3, C = C3.

*/


/*
#include<iostream>
using namespace std;
*/

// Your code goes here

void compute(int &A,int &B, int &C){
    A=A*A*A;
    B=B*B*B;
    C=C*C*C;
}

/*
int main()  {
    int A, B, C;
    cin>>A>>B>>C;
    compute(A, B, C);
    cout<<A<<endl;
    cout<<B<<endl;
    cout<<C<<endl;
    return 0;
}
*/
