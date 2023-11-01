#include<iostream>
using namespace std;

class Complex
{
    int a, b;

    public:

    // creating a constructor
    // constructor is a specialmember function with same name as of the class
    // It is automatically invoked whenever a object is created
    // It is used to initializ the objects of its class

        Complex(void); // constructor declaration

        void printData(){
            cout<<"Your number is:- "<<a<<"+"<<b<<"i"<<endl;
        }
};

Complex ::Complex(void) // This is a default constructor as it takes no parameters
{ 
    a = 10;
    b = 20;
}

int main()
{
    Complex c1, c2, c3;

    c1.printData();
    c2.printData();
    c3.printData();

    return 0;
}

/* Properties

1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot have return values and do not have return values
4. It can have defalut arguments
5. we cannot refer to their address

*/
