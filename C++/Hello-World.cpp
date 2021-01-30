/*
C++ is a general purpose programming language that is free-form and compiled. It is regarded as an intermediate-level language, as it comprises both high-level and low-level language features. It provides imperative, object-oriented and generic programming features.
he overall program has a structure, but it is also important to understand the purpose of part of that structure.



Detailed Explanation:
We’ll start from the very first line and go step by step!


The hash sign (#) signifies the start of a preprocessor command. The #include command is a specific preprocessor command that effectively copies and pastes the entire text of the file specified between the angle brackets into the source code. In this case, the file is “iostream” which is a standard file that should come with the C++ compiler. This file name is short for “input-output streams”; in short, it contains code for displaying and getting the text from the user.
The include statement allows a programmer to “include” this functionality in the program without having to literally cut and paste it into the source code every time. The iostream file is part of the C++ standard library, which provides a set of useful and commonly used functionality provided with the compiler. The “include” mechanism, however, can be used both for standard code provided by the compiler and for reusable files created by the programmer.
C++ supports the concept of namespaces. A namespace is essentially a prefix that is applied to all the names in a certain set. One way to think about namespaces is that they are like toolboxes with different useful tools. The using command tells the compiler to allow all the names in the “std” namespace to be usable without their prefix. The iostream file defines three names used in this program - cout, cin, and endl - which are all defined in the std namespace. “std” is short for “standard” since these names are defined in the standard C++ library that comes with the compiler.
Without using the std namespace, the names would have to include the prefix and be written as std::cout, std::cin, and std::endl.
The starting point of all C++ programs is the main function. This function is called by the operating system when your program is executed by the computer.

cin & cout
The name cout is short for “character output” and cin, correspondingly, is an abbreviation for “character input”.
In a typical C++ program, most function calls are of the form object.function_name(argument1, argument2).
Symbols such as << can also behave like functions, as illustrated by the use of cout above. This capability is called operator overloading.

{ }
A block of code is defined with the { } tokens. { signifies the start of a block of code, ​and } signifies the end. The { } tokens have other uses as well.

semicolons
Statements in C++ must be terminated with a semicolon.

return
The return keyword tells the program to return a value to the function int main that called this function and then to continue execution in the int main function from the point at which this function was called.
The type of the value returned by a function must match the type specified in the declaration of the function.
Now that we have learned the basics of our code. Let’s solve a example in the editor below.

-> Write a code to print "Hello, InterviewBit!" (without quotes) in the editor below.

*/

#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    cout<<"Hello, InterviewBit!"<<endl;
    
    return 0;
}
