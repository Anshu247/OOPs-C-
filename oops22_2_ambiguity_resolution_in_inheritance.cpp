#include<iostream>
using namespace std;

class Base1
{
    public:
        void greet(){
            cout<<"How are you"<<endl;
        }
};

class Base2
{
    public:
        void greet(){
            cout<<"Kaise ho"<<endl;
        }
};

class Derived: public Base1, public Base2
{
    int a;

    public:
        void greet(){
            Base1::greet();
            // Base2::greet();
        }
};

class B
{
    public:
        void say(){
            cout<<"Hello World"<<endl;
        }
};

class D: public B
{
    int a;

    // D's new say() method will override base class's say() method
    public:
        void say(){
            cout<<"Hello my beautiful people"<<endl;
        }
};

int main()
{
    B b;
    D d;

    b.say();
    d.say();

    return 0;
}