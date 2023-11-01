#include<iostream>
using namespace std;

// Base class
class Employee
{
    public:
        int id;
        float salary;

        Employee(int inpId){
            id = inpId;
            salary = 34;
        }
        Employee(){}
};

// Derived class
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
NOTE:-
1. Default visibility mode is private
2. Public visibility mode: public members of the base class becomes public members of the derived class
3. Private visibility mode: public members of the base class becomes private members of the derived class
4. Private members are never inherited
*/

// Creating a Programmer class derived from Employee Base Class
class Programmer : public Employee
{   
    public:
        int languageCode;

        Programmer(int inpId){
        id = inpId;
        languageCode = 9;
        }

        void getData(){
            cout<<id<<endl;
        }
};

int main()
{
    Employee anshu(1), harshit(2);

    cout<<anshu.salary<<endl;
    cout<<harshit.salary<<endl;

    Programmer professor(10);

    cout<<professor.languageCode<<endl;
    professor.getData();

    cout<<professor.id<<endl;

    return 0;
}