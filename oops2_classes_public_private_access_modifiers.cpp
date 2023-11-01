#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;

    public:
        int d, e;

        void set_data(int a1, int b1, int c1); //Declaration
        void get_data()
        {
            cout<<"The value of a is:- "<<a<<endl;
            cout<<"The value of b is:- "<<b<<endl;
            cout<<"The value of c is:- "<<c<<endl;
            cout<<"The value of d is:- "<<d<<endl;
            cout<<"The value of e is:- "<<e<<endl;
        }
};

void Employee :: set_data(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee anshu;

    // anshu.a = 77; // This will give error because a is private
    anshu.d = 4;
    anshu.e = 5;

    anshu.set_data(1,2,3);
    anshu.get_data();

    return 0;
}