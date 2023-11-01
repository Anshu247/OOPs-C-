#include<iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

    public:
        void setData(void){
            cout<<"Enter the ID:- ";
            cin>>id;

            count++;
        }

        void getData(void){
            cout<<"The ID of this employee is:- "<<id<<" and this is employee number "<<count<<endl;
        }

        static void getCount(void){
            cout<<"The value of count is: "<<count<<endl;
        }
};

// Count ia the static data member of class Employee

int Employee ::count; // Default value is 0
// int Employee ::count=1000; 

int main()
{
    Employee anshu, harshit, professor;
    anshu.setData();
    anshu.getData();

    Employee ::getCount();

    harshit.setData();
    harshit.getData();

    Employee ::getCount();

    professor.setData();
    professor.getData();
    
    Employee ::getCount();
    
    return 0;
}