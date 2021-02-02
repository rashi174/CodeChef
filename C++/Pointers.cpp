/*
A pointer is a special kind of variable that stores the address in memory of another variable and can be used to manipulate that variable.

In general, whenever a variable is used in C++, it must exist somewhere in the host computer’s memory and pointers can store the location of a particular variable.

Pointers associate two pieces of information:

The memory address, which is the "value" of the pointer itself.
The data type of the variable pointed to, which is the kind of variable located at that address.
Declaring pointers
Declaring a pointer is similar to declaring a regular variable, although the name is preceded by an asterisk:

int *ptr;
void *vp;
In the example above

ptr is a pointer to an integer.
vp is a void pointer, which does not require a specific data type.
Assigning Addresses to Pointers
int* ptr, var;
var = 5;
// assign address of var to ptr pointer
ptr = &var;
Here, 5 is assigned to the variable var. And, the address of var is assigned to the ptr pointer with the code ptr = &var.

Dereferencing Pointers
Pointers can be dereferenced to access the value of the variable at the pointer’s address​.

void f(int* p)
{
    // The code "*p" takes the value of the data at location stored in p
    int n = *p;
}
Note: Unlike references, pointers are not guaranteed to be initialized. As such, they should only be used when they are known to point to an existing object.

Malloc() and Free()
The malloc() function in C++ allocates a block of uninitialized memory and returns a void pointer to the first byte of the allocated memory block if the allocation succeeds.

If the size is zero, the value returned depends on the implementation of the library. It may or may not be a null pointer.

void* malloc(size_t size);
The free() function in C++ deallocates a block of memory previously allocated, making it available for further allocations.

The free() function does not change the value of the pointer, that is it still points to the same memory location.

void free(void *ptr);
Example

int main()
{
    int *ptr;
    ptr = (int*) malloc(5*sizeof(int));

    if(!ptr){
        cout << "Memory Allocation Failed";
        return 0;
    }
    // Initialize values
    for (int i=0; i<5; i++){
        ptr[i] = i+i;
    }

    // Initialized values"
    for (int i=0; i<5; i++){
        /* ptr[i] and *(ptr+i) can be used interchangeably */
        cout << *(ptr+i) << " ";
    }
    cout<<endl;
    // output: 0 2 4 6 8

    free(ptr);
    // If we again prints the value it will print some garbage value
     
    for (int i=0; i<5; i++){
        cout << *(ptr+i) << " ";
    }
    // This will not give any error but prints some garbage value
    return 0;
}
Common mistakes when working with pointers
Suppose, we want a pointer varPoint to point to the address of var. Then,

int var, *varPoint;

// Wrong! 
// varPoint is an address but var is not
varPoint = var;

// Wrong!
// &var is an address
// *varPoint is the value stored in &var
*varPoint = &var;

// Correct! 
// varPoint is an address and so is &var
varPoint = &var;

// Correct!
// both *varPoint and var are values
*varPoint = var;
Try the following example in the editor below.

You are given a function solve which has the following parameters:

int *A: an integer
int *B: an integer
The function is declared with a void return type, so there is no value to return.
Modify the values in memory so that A contains their sum and B contains their absolute difference
*/

/*
#include<iostream>
using namespace std;
*/

void solve(int *A, int *B){
    int a=*A;
    int b=*B;
    *A=(a+b);
    *B=abs(a-b);

}



/*
int main()  {
    int A, B;
    int *pA = &A, *pB = &B;
    cin>>A>>B;
    solve(pA, pB);
    cout<<A<<endl;
    cout<<B<<endl;
    return 0;
}
*/

//Editorial Code
void solve(int *A, int *B){
    int temp = *A;
    *A = *A + *B;
    *B = abs(temp - *B);
}
