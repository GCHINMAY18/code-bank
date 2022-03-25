// Ques 1.
/*
#include <iostream>
#include <cmath>

using namespace std;

class employee
{
private:
    string address;
    string name;
    int year_join;


public:
    void setdata();
    void display();
};

void employee ::setdata()
{
    cout << "Name  :" << endl;
    getline(cin, name);
    cout << "Year of joining :" << endl;
    cin >> year_join;
    cout << "Address : " << endl;
    cin>>address;
}

void employee ::display()
{
    cout << name << "     " << year_join << "      " << address << endl;
}

int main()
{
    employee e1, e2, e3;

    cout<<"Enter details for employee 1 :"<<endl;
    e1.setdata();

    getchar();

    cout<<"Enter details for employee 2 :"<<endl;
    e2.setdata();

    getchar();

    cout<<"Enter details for employee 3 :"<<endl;
    e3.setdata();

    cout << "\n" << endl;

    cout << "Name     Year      Address" << endl;

    e1.display();
    e2.display();
    e3.display();

    return 0;
}
*/







/*
#include <iostream>
using namespace std;

class employee
{
    int salary[50];
    int hours[50];
    int counter = 0;

public:
    void getinfo();
    void addsal();
    void addwork();
    void display();
};

void employee ::getinfo()
{
    cout << "Enter the salary of the employee  " << counter + 1 << endl;
    cin >> salary[counter];
    cout << "Enter the number of working hours per day of employee " << counter + 1 << endl;
    cin >> hours[counter];
    counter++;
}

void employee ::addsal()
{
    for (int i = 0; i < counter; i++)
    {
        if (salary[i] < 500)
        {
            salary[i] += 10;
        }
    }
}

void employee ::addwork()
{
    for (int i = 0; i < counter; i++)
    {
        if (hours[i] > 6)
        {
            salary[i] += 5;
        }
    }
}

void employee ::display()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Net salary of employee " << i + 1 << " is : " << salary[i] << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of employee's whose data is to upload : ";
    cin >> n;
    employee e;

    for (int i = 0; i < n; i++)
    {
        e.getinfo();
        e.addsal();
        e.addwork();
    }
    e.display();

    return 0;
}
*/



#include <iostream>
using namespace std;

int main()
{
    return 0;
}
