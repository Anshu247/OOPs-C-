#include<iostream>
using namespace std;

class C2;

class C1
{
    int val1;
    friend void exchange(C1 &, C2 &);

    public:
        void indata(int a){
            val1 = a;
        }

        void display(void){
            cout<<val1<<endl;
        }
};

class C2
{
    int val2;
    friend void exchange(C1 &, C2 &);

    public:
        void indata(int a){
            val2 = a;
        }

        void display(void){
            cout<<val2<<endl;
        }
};

void exchange(C1 & x, C2 & y)
{
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}

int main()
{
    C1 oc1;
    C2 oc2;

    oc1.indata(34);
    oc2.indata(67);

    exchange(oc1, oc2);

    cout<<"The value of oc1 after exchanging becomes:- "<<endl;
    oc1.display();

    cout<<"The value of oc2 after exchanging becomes:- "<<endl;
    oc2.display();

    return 0;
}