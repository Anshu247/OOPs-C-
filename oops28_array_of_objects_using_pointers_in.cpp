#include<iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }

        void getData(void){
            cout<<"Code of this item is:- "<<id<<endl;
            cout<<"Price of this item is:- "<<price<<endl;
        }
};

int main()
{
    int size = 3;

    // int *ptr = &size;
    // int *ptr = new int[34];

    // general store item
    // veggies item
    // hardware item

    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    int p;
    float q;

    for(int i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item "<<i+1<<endl;
        cin>>p>>q;

        // (*ptr).setData(p,q);
        ptr->setData(p,q);
        ptr++;
    }

    for (int j = 0; j < size; j++)
    {
        cout<<"Item number:- "<<j+1<<endl;

        ptrTemp->getData();
        ptrTemp++;
    }
       

    return 0;
}