/*
Templates are the mechanism by which C++ implements the generic concept.

The following example illustrates two non-generic (type-sensitive) functions for adding two numbers, x and y:

#include <iostream>
using namespace std;

int add ( int x, int y ) //add two ints
{
    return (x + y);
}

double add ( double x, double y )  //add two doubles
{
    return (x + y);
}

int main(){
  int temp1;
  double temp2;
  temp1 = add(4,5);
  temp2 = add(4.5,5.5);
  cout << "Value of temp1 is: "<< temp1<<endl;
  cout << "Value of temp2 is: "<<temp2<<endl;
}
Two functions that do exactly the same thing, but cannot be defined as a single function because they use different data types.

Function Templates

Templates were made to fulfill the need to design a generic code, that works the same way in different situations.

Syntax

To start a template, you must provide the following declaration:

template<class Type>
// or
template<typename Type>
The keywords class and typename have exactly the same meaning in this case, but some compilers may replace the words with each other.

Type is our generic data type’s name, and when the template is to be used, it would be the same as if Type was a typedef for your datatype,
The following example now illustrates how the add function would be written using a template​:

#include <iostream>
using namespace std;

template<class Type>
Type add ( Type x, Type y )
{
    return (x * y);
}

int main() {
    int result = add<int> ( 2, 5 ); //calling template type function
    cout << "Result when integer values are passed is: " << result <<endl;
    double result2 = add<double>(2.5,5.5);
    cout << "Result when double values are passed is: "<<result2;
    return 0;
}
Class Templates

As another powerful feature of C++, you can also make template classes, which are classes that can have members of the generic type.

template<class T>
class Score
{
private:
        T scorenumber;
public:
       Score(T args){scorenumber = args;}
};
This class we defined keeps score in the variable scorenumber which could be int, float or double.

This is how it’s object will b​e declared:

Score<int> myscore(40);
// or
Score<double> myscore(23.9);
Find the maximum value by comparing two values.

#include <iostream>
using namespace std;

template <class T>
class myvalues {
    T myval1, myval2; //two values of type T
  public:
    myvalues (T arg1, T arg2){myval1=arg1; myval2=arg2;} //constructor
    T max (); //max function
};

template <class T>
T myvalues<T>::max()  //definition of a function with type T
{
  if(myval1 > myval2){
    return myval1;
  }else{
    return myval2;
  }
}

int main () {
  myvalues <int> obj(20, 50); //try changing the value and value types to results for different types 
  cout << "Max value is: " << obj.max();
  return 0;
}
As you can see in the example above this time we declared a function of type T in our class.

The definition of the function was outside the class so we had to add the prefix for template class beforehand.

Try the following example in the editor below.

In this exercise, you need to define a Template Class type function index_of_largest that will generalize the function such that it finds maximum value index for both int and double type array input values.

The function code for finding the index of the largest value in an array:

Takes two values:

Array of values
Size of array
Note: All values in the array will be distinct

Sample Input

int array[] = {4, 2, 10, 13, 2}
double array[] = {2.4, 5.2, 3.1, 1.5}
Sample Output

// You have to return the index
3
1

*/

/*
#include <iostream>
using namespace std;
*/

// Your code goes here


template<class T> T index_of_largest(const T* data, int size) {
    T result = data[0];
    int index=-1;

    for(int i = 1 ; i < size ; i++)
      if(result < data[i]){
        result = data[i];
        index=i;}
    return index;
  }




/*
int main()  {
    int n;
    cin>>n;
    int arr_int[n];
    for(int i = 0; i < n; i++){
        cin>>arr_int[i];
    }
    int res = index_of_largest<int>(arr_int, n);
    cout<<res<<endl;
    
    cin>>n;
    double arr_double[n];
    for(int i = 0; i < n; i++){
        cin>>arr_double[i];
    }
    res = index_of_largest<double>(arr_double, n);
    cout<<res<<endl;
    return 0;
}
*/
