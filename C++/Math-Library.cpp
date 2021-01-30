/*

The C++ math library is actually C’s math library. It is easy to use and is accessed by including cmath.

#include <cmath>
Square Root
The function sqrt is used to compute the square root of a number. It takes only one argument, the number, whose square root needs to be calculated.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int val = 10;
    cout << sqrt(val) << endl;
    // prints 3.16228 
    return 0;
}
Powers
The function pow is used to​ calculate the power of a number in C++. It takes as its first argument the number itself and the value to which it needs to be raised is the second argument.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int val = 5;
    // we use the pow function to compute the powers of the integer values given
    cout << pow(val, 2) << endl;
    // prints 25
    cout << pow(val, 3) << endl;
    // prints 125
    cout << pow(val, 0.5) << endl;
    // prints 2.23607
    return 0;
}
Trigonometry
To perform trigonometric operations, the cmath library provides the functions sin​, cos and tan. Each of the three takes​ only one argument, the number, on which these operations need to be applied.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float val = 5.7;

    // here the sin, cos and tan functions are being used to compute the trignometric values
    cout << sin(val) << endl;
    // prints -0.550686
    cout << cos(val) << endl;
    // prints 0.834713
    cout << tan(val) << endl;
    // prints -0.659731
    return 0;
}
Note: Trigonometric functions in cmath use RADIANS.

Try the following example in the editor below.

You are given two float variables A and B, perform the operations defined in comments in the editor below.
*/


#include<iostream>
#include<cmath>
using namespace std;

int main()  {
    float A = 12.56, B = 5.12;
    // Print the sum of cube of both A and B, and store it in float variable named "cube_val"
    
    float cube_val;
    cube_val=pow(A,3)+pow(B,3);
    cout<<cube_val<<endl;
    
    // Print the square root of cube_val, and store it in float variable named "sq_val"
    
    float sq_val;
    sq_val=sqrt(cube_val);
    cout<<sq_val<<endl;
    
    // Print the sin of sq_val
    
    cout<<sin(sq_val)<<endl;
    return 0;
}
