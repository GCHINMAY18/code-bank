#include <iostream>
using namespace std;

int main()
{
    // selection control structure (IN Short use of if else - or switch case)

    // By if else-if else ladder
    /*
    int age;
    cout << "Enter the age :" << endl;
    cin >> age;

    if (age <= 0)
    {
        cout << "You are not yet born." << endl;
    }
    else if (age < 18)
    {
        cout << "You are less than 18 you cann't vote." << endl;
    }
    else if (age >= 18)
    {
        cout << "You are 18 or more so you can vote." << endl;
    }
    else
    {
        cout << "Enter valid age." << endl;
    }
    */
    // By switch case

    int age;
    cout << "Enter the age :" << endl;
    cin >> age;

    switch (age)
    {
    case 18:
        cout << "Congrats you are 18 so you can now give your 1st vote. " << endl;
        break;
    case 21:
        cout << "you can drink juice now  " << endl;
        break;

    default:
        cout << "Bye bye " << endl;
        break;
    }

    return 0;
}
