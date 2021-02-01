/*
C++ provides a nice alternative data type to manipulate strings, and the data type is conveniently called string. Some of its widely used features are the following:

Declaration:
string a = "abc";
Size:
int len = a.size();
Concatenate two strings:
string a = "abc";
string b = "def";
string c = a + b; // c = "abcdef".
Accessing ith element:
string s = "abc";
char c0 = s[0]; // c0 = 'a'
char c1 = s[1]; // c1 = 'b'
char c2 = s[2]; // c2 = 'c'

s[0] = 'z'; // s = "zbc"
Try the following example in the editor below.

You are given two strings, A and B, separated by a new line. Each string will consist of lower case Latin characters (‘a’-‘z’).

Output three lines:

First line print two space-separated integers, representing the length of A and B respectively.
Second line print the string produced by concatenating A and B (A+B).
Third line print two strings separated by a space, A' and B'. A' and B' are the same as A and B, respectively, except that their first characters are swapped.
Sample input:

abcd
ef
Sample Output:

4 2
abcdef
ebcd af

*/



/*
#include<iostream>
#include<string>
using namespace std;
*/

int main()  {
    string A, B;
    cin>>A>>B;
    // YOUR CODE GOES HERE
    cout<<A.size()<<" "<<B.size()<<endl;
    cout<<A+B<<endl;
    char temp;
    temp=A[0];
    A[0]=B[0];
    B[0]=temp;
    cout<<A<<" "<<B;
    return 0;
}
