/*
C++ allows us to convert data of one type to that of another. This is known as type conversion.

There are two types of type conversion in C++.

Implicit Conversion
Explicit Conversion (also known as Type Casting)
Implicit Type Conversion
The type conversion that is done automatically done by the compiler is known as implicit type conversion. This type of conversion is also known as automatic conversion.

int a = 10;
char b = 'A';
a = a + b; // y implicitly converted to int. ASCII value of 'A' is 65
cout<<a<<endl;
// value of a is 75(10 + 65)

int num_int;
double num_double = 10.79;  

// implicit conversion  
// assigning a double value to an int variable  
num_int = num_double;  

// Value of num_int will be 10
// Here, the double value is automatically converted to int by the compiler before it is assigned to the num_int variable.
This is also an example of implicit type conversion.
Explicit Conversion
When the user manually changes data from one type to another, this is known as explicit conversion. This type of conversion is also known as type casting.

There are two major ways in which we can use explicit conversion in C++. They are:

C-style type casting (also known as cast notation)
Type conversion operators
C-style Type Casting
This is done by explicitly defining the required type in front of the expression in parenthesis. This can be also considered as forceful casting.

(data_type)expression;
Example:

int a = 10;
char b = 'A';
a = a + (int)b;
cout<<a<<endl;
// value of a is 75
Type conversion operators
C++ also has four operators for type conversion:

static_cast
dynamic_cast
const_cast
reinterpret_cast
float f = 4.5;   
// using cast operator 
int b = static_cast<int>(f); 
cout << b; 
// value of b is 4


Try the following example in the editor below.
You are given a character called ch, print the ASCII value of the character.

Example Input:

ch = 'a'
Example Output:

97

*/

#include<iostream>

using namespace std;

int main()  {
    char ch;
    cin>>ch;
    //Your code goes here
    cout<<(int)ch<<endl;
    return 0;
}
