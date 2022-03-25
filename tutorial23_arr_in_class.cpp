#include <iostream>
using namespace std;

class shop
{
    int itemid[50];
    int item_price[50];
    int counter;

public:
    void initcounter();
    void set();
    void display();
};

void shop ::initcounter()
{
    counter = 0; // We have made this counter because by the help of this we can have the info of number of items seted .
}

void shop ::set()
{
    cout << "Enter the id of the item number " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter the price of the item : " << endl;
    cin >> item_price[counter];

    counter++; // is incrimented so it will have the tally of number of time  we have set price.
}

void shop ::display()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price set for the item id " << itemid[i] << " is " << item_price[i]<<endl;
    }
}

int main()
{
    int num;
    cout << "Enter the number of items for which you want to set price : " << endl;
    cin >> num;

    shop paridhan;
    paridhan.initcounter();

    for (int i = 0; i < num; i++)
    {
        paridhan.set();        //will set the price and time till  where we wanted 
    }

    paridhan.display();       // Will display the id with price.

    return 0;
}
