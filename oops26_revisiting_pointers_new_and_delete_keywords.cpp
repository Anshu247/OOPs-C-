#include<iostream>
using namespace std;



int main()
{   
    //Basic Example
    int a = 4;
    int *ptr = &a;

    cout<<"The value of a is:- "<<*(ptr)<<endl;

    // New Operator
    int *p = new int(40);
    float *k = new float(40.78);

    cout<<"The value of at address p is:- "<<*(p)<<endl;
    cout<<"The value of at address k is:- "<<*(k)<<endl;

    int *arr = new int[3];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    cout<<"The value of arr[0] is:- "<<arr[0]<<endl;
    cout<<"The value of arr[1] is:- "<<arr[1]<<endl;
    cout<<"The value of arr[2] is:- "<<arr[2]<<endl;

    // Delete Operator
    int *arr1 = new int[3];

    arr1[0] = 40;
    arr1[1] = 50;
    arr1[2] = 60;

    // delete arr1;
    delete[] arr1;

    cout<<"The value of arr[0] is:- "<<arr1[0]<<endl;
    cout<<"The value of arr[1] is:- "<<arr1[1]<<endl;
    cout<<"The value of arr[2] is:- "<<arr1[2]<<endl;

    return 0;
}