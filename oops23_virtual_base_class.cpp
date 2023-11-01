#include<iostream>
using namespace std;

/*
Inheritance:

Student ---> Test
Student ---> Sports
Test ---> Result
Sports ---> Result
*/

class Student
{
    protected:
        int roll_no;
    
    public:
        void set_number(int a){
            roll_no = a;
        }

        void print_number(void){
            cout<<"Your roll number is:- "<<roll_no<<endl;
        }
};

class Test: virtual public Student
{
    protected:
        float maths, physics;

    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }

        void print_marks(void){
            cout<<"Your result is here: "<<endl
            <<"Maths: "<<maths<<endl
            <<"Physics: "<<physics<<endl;
        }
};

class Sports: virtual public Student
{
    protected:
        float score;

    public:
        void set_score(float sc){ 
            score = sc;
        }

        void print_score(void){
            cout<<"Your PT score is:- "<<score<<endl;
        }
};

class Result: public Test, public Sports
{
    private:
        float total;
    
    public:
        void display(void){
            total = maths + physics + score;

            print_number();
            print_marks();
            print_score();

            cout<<"Your total score is:- "<<total<<endl;
        }
};

int main()
{
    Result anshu;

    anshu.set_number(7700);
    anshu.set_marks(77.7, 99.5);
    anshu.set_score(9);
    anshu.display();

    return 0;
}