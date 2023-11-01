#include<iostream>
using namespace std;

class Bank_Deposit
{
    int Principle;
    int years;

    float interestRate;
    float returnValue;

    public:
        Bank_Deposit(){}

        Bank_Deposit(int p, int y, float r); // r can be a value like 0.04
        Bank_Deposit(int p, int y, int r); // r can be a value like 14

        void show();
        
};

Bank_Deposit ::Bank_Deposit(int p, int y, float r)
{
    Principle = p;
    years = y;
    interestRate = r;

    returnValue = Principle;

    for(int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }

}

Bank_Deposit ::Bank_Deposit(int p, int y, int r)
{
    Principle = p;
    years = y;
    interestRate = float(r)/100;

    returnValue = Principle;

    for(int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }

}

void Bank_Deposit ::show()
{
    cout<<endl<<"Principle amount was "<<Principle<<" Return value after "<<years<<"  year is "<<returnValue<<endl;
}

int main()
{
    Bank_Deposit bd1, bd2, bd3;

    int p, y;
    float r;
    int R;

    bd3.show();
     
    cout<<"Enter the value of p y and r:- "<<endl;
    cin>>p>>y>>r;

    bd1 = Bank_Deposit(p,y,r);
    bd1.show();

    cout<<"Enter the value of p y and R:- "<<endl;
    cin>>p>>y>>R;

    bd2 = Bank_Deposit(p,y,R);
    bd2.show();

    return 0;
}