#include<iostream>
using namespace std;

class Base
{
    protected:
        int a;

    private:
        int b;
};

/*
For a protected member
                            Public derivation Private derivation Protected derivation

    1. Private Members       Not Inherited      Not Inherited     Not Inherited
    2. Protected Members     Protected          Private           Protected
    3. Public Members        Public             Private           Protected
*/

class Derived :protected Base
{

};

int main()
{
    Base b;
    Derived d;

    cout<<d.a; // This will give error because we cannot print protected members
    // OR, will not work since a is protected in both base as well as derived class

    return 0;
}