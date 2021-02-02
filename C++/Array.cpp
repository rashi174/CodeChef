/*
An array is a collection of similar data types under the same name.

In C++, arrays are declared in the following way​:

//dataType arrayName[arraySize];
int arr[5]; //int is the datatype, arr is the name, 5 is the size of array
The above statement declares a static array of 5 elements, which can be accessed individually.

Note: Although arr behaves like a pointer, its value cannot be changed as it references a specific region in memory.

Initializing​ Arrays
int main() {
    int arr[5] = {19, 10, 5, 6, 14}; //initializing the array with 5 values
    cout << "The value of arr[0], that is, the first value in the array is: " << arr[0] << endl;
    cout<< "The value of arr[1], that is, the second value in the array is: " << arr[1] << endl;
    cout<< "The value of arr[2], that is, the third value in the array is: " << arr[2] << endl;
    cout<< "The value of arr[3], that is, the fourth value in the array is: " << arr[3] << endl;
    cout<< "The value of arr[4], that is, the fifth value in the array is: " << arr[4] << endl;
    int arr2[] = {1,2,3,4}; //we don't specify the size and the compiler assumes a size of 4
  
    //we calculate size of the arr2 using the inbuilt sizeof function 
    //divide the total size of the array by the size of the array element to claculate the size
    cout << "The size of arr2 is: "<<sizeof(arr2)/sizeof(arr2[0])<<endl;                             
}
In the above example, we have an array arr of size 5. We use indexing to refer to the location of the values in an array. For example:

The value 19 is present at the index 0 of the array. This is written as arr[0] = 19. Here, by using arr[0] we are referring to the location of 19.
Similarly, the index of the value 10 in the array will be 1. It’ll be written arr[1] = 10.
The index of the value 5 is 2 in the array. So arr[2] = 5.
Note: Arrays have 0 as the first index not 1.

Accessing Array Values
We use indexing to access arrays values just like we did in the example above.

Suppose you declared an array of 15 elements.

You can use the array members from arr[0] to arr[14].

Note: If you try to access array elements outside of its bound, let’s say arr[20], the compiler may not show any error. However, this may cause unexpected output (undefined behavior).

int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
cout << "The value of arr[20] is: "<< arr[20] <<endl;
// We will get a garbage value at arr[20] which is an index that is out of bounds.
Iterate over array
We can also iterate over the whole array and access any value easily using any loop.
Below is an example that use for loop to iterate over the array.

int main() {
    int arr[5] = {}; // no values stored in array by default
    int num = 1;
    for (int i=0; i<5; i++){
        arr[i] = num; //setting index i of array arr equal to num
        num++;        //incrementing num
        cout << "The value of arr["<<i<<"] is equal to: "<< arr[i]<<endl;
    }
    return 0;
}
Try the following example in the editor below.

Complete the given function named ‘reverseArray’ containing an integer array ‘arr’ and length of arr N. Reverse the array ‘arr’.

*/

/*
#include<iostream>
using namespace std;
*/

void reverseArray(int arr[], int N){
    int start=0;
    int end=N-1;
    while (start < end)
    {
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}


/*
int main()  {
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    reverseArray(arr, N);
    for(int i = 0; i < N; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
*/
