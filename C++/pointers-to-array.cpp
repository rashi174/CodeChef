

/*

Allocating variables
In C++, a new object, variable or array can be created using the new operator, and free with the delete operator.

int *ptr = new int;  
  /* ... */  
delete ptr;
The new operator allocates an object from the heap and optionally initializes it. When you have finished using it, you must delete it. Otherwise, the pointed memory is inaccessible, and the result is memory leak.

Referencing variables
The & operator is used to reference an object. When using this operator on an object, you are provided with a pointer to that object. This new pointer can be used as a parameter or be assigned to a variable.

int num;    
int *ptr;    //declaring int type pointer  
ptr = #    //setting pointer equal to the address of num  
cout << "Address stored in ptr is: "<< ptr<<endl;  
*ptr = 7;    //setting value of *ptr to 7  
cout << "value of num is: "<< num <<endl;  
// value of num is: 7
Pointers to Arrays
C++ allows us to create arrays and then use pointers to carry out operations on those arrays.

Example:

int main() {  
    //first we declare an array  
    int arr[4];  
    //next we declare a pointer   
    int *ptr;  
    //now we make the pointer ptr point to the first element of the array arr  
    ptr = arr;  
    //next we set the value of the first element of arr, that is, arr[0] equal to 3  
    *ptr = 3;  
    //now we increment the pointer ptr to point to second element of the array arr  
    ptr++;  
    //next we update the value of the second element of arr, that is, arr[1] being pointed at by ptr  
    *ptr = 5;  
    //to directly store a value at some index in arr, e.g at the 3rd index of array we first get the address   
    ptr = &arr[3];  
    //now storing a value at arr[3] location  
    *ptr = 10;  
    //moving pointer back to arr[0]  
    ptr = arr;  
    //storing value at arr[2] now  
    *(ptr+2) = 8;  
    //now lets display all the values we stored in our array  
    for (int i=0; i<4; i++){  
        cout<< "value at arr["<<i<<"] is: "<<arr[i]<<endl;  
    }  
    return 0;  
}
Multi-dimensional arrays
A multidimensional array allows nesting arrays:

int grid[3][3];  
//This allocates 3*3 elements in one memory block.
Note: Even though arrays behave similarly to pointers, a multidimensional array is not a pointer-to-a-pointer.

Here is a visual representation of the multi-dimensional array grid[3][3]:



The objects grid, grid[0] and grid[0][0] are always at the same location (but different types).
The objects of variable pptr and pointer *pptr, **pptr are at different locations.
When evaluating grid[0][0]

The array grid (which is an int[3][3]) is first converted to a pointer of type int( * )[3].
Then taking the element at offset 0 yields an object of int[3].
Then it is converted to int* again and the element at offset 0 is taken, generating an object of type int&.
Pointer to a pointer
A pointer contains a reference to another variable. It may also point to a pointer:

int **pptr;


For pptr[0][0], the address stored in pptr is taken and the address stored in that address is taken, ​and it is the result of the expression.

Example:

int main() {
    int x=1;
    int *ptr1;
    int **ptr2; 
  
    ptr1 = &x;    //getting address of x
    ptr2 = &ptr1;  //getting address of ptr1
  
    cout << "Value of x is: "<<x<<endl;
  
    //let's print the value being pointed to by ptr1
    cout << "The value being pointed to by ptr1 is: "<<*ptr1<<endl;
  
    //let's print the address being pointed to by ptr2
    cout << "The address being pointed to by ptr2 is: "<<*ptr2<<endl;
  
    //let's print the value being pointed by ptr2
    cout << "The value being pointed to by ptr2 is: "<<**ptr2<<endl;
  
    return 0;
}
In the example above *ptr2 will give the value of the address at which our number is stored, this will also be the address of ptr1.
**ptr2 then further dereferences and gives the value stored at that address which is 1.
Try the following example in the editor below.

You are given an integer N, create a 2D array named ‘grid’ of size N x N. 

The diagonal of the grid should be filled with 0.
The lower side should be filled with -1s.
The upper side should be filled with 1s.
*/
#include<iostream>
using namespace std;


int main() {
    int N;
    cin>>N;
    // YOUR CODE GOES HERE
    int grid[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i==j) grid[i][j]=0;
            else if(i<j) grid[i][j]=1;
            else grid[i][j]=-1;
        }
    }
    // Don't change the code below
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout<<grid[i][j]<<" ";
        }    
        cout<<endl;
    }
    return 0;
}
