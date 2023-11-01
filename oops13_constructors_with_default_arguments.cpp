#include<iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

    public:
        Simple(int a, int b=9, int c=8){
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void printData();
};

void Simple ::printData()
{
    cout<<"The value of data is:- "<<data1<<" and "<<data2<<" and "<<data3<<endl;
}

int main()
{
    Simple s1(1,4,7);
    s1.printData();
    
    Simple s2(1);
    s2.printData();

    Simple s3(1,7);
    s3.printData();

    return 0;
}