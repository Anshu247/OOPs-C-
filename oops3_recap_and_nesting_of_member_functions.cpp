#include <iostream>
#include <string>

using namespace std;

class Binary
{
// private:
    string s;
    // void chk_bin(void);

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void Binary ::read(void)
{
    cout << "Enter a binary number:- ";
    cin >> s;
}

void Binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format" << endl;
            exit(0);
        }
    }
}

void Binary ::ones_compliment(void)
{
    // chk_bin(); // nesting member
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else
        {
            s.at(i) = '0';
        }
    }
}

void Binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }

    cout<<endl;
}

int main()
{
    Binary b;

    b.read();
    b.chk_bin();

    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}