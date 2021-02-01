/*
Stringstream is a stream class to operate on strings. It implements input/output operations on memory (string) based streams.

stringstream can be helpful in different type of parsing. The following operators/functions are commonly used here

Operator >> Extracts formatted data.
Operator << Inserts formatted data.
Method str() Gets the contents of underlying string device object.
Method str(string) Sets the contents of underlying string device object.
Its header file is sstream.

One common use of this class is to parse comma-separated integers from a string (e.g., “23,4,56”).

stringstream ss("33,7,65");
char ch;
int a, b, c;
ss >> a >> ch >> b >> ch >> c; // a = 33, b = 7, c = 65
Here ch is a storage area for the discarded commas.
If the >> operator returns a value, that is a true value for a conditional. Failure to return a value is false.

Getline Function
The C++ getline() is a standard library function that is used to read a string or a line from an input stream. It is a part of the <string> header.
The getline() function extracts characters from the input stream and appends it to the string object until the delimiting character is encountered.
While doing so the previously stored value in the string object str will be replaced by the input string if any.

Syntax:

istream& getline(istream& is, string& str, char delim);
Parameters:

is: It is an object of istream class and tells the function about the stream from where to read the input from.
str: It is a string object, the input is stored in this object after being read from the stream.
delim: It is the delimitation character which tells the function to stop reading further input after reaching this character.
Return Value: This function returns the same input stream as is which is accepted as parameter.

Try the following example in the editor below.

Given a string A of comma delimited integers, print each integer in a separate line.

Sample Input:

A = 33,7,65
Sample Output:

33
7
65
 




*/

/*
#include<iostream>
#include<sstream>
using namespace std;
*/

int main()  {
    string A;
    cin>>A;
    // YOUR CODE GOES HERE
    stringstream ss(A);
    string substr;
    while(ss.good()){
    getline(ss, substr, ',');
    cout<<substr<<endl;}
    return 0;
}
