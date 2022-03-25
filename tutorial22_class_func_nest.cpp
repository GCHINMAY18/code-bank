// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private





// Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class binary_num
{
private:
    string str;
    void chk_bin();   
    //if we put chk_bin() in private then it cannot be assecced directly by any object or function outside the class.
    //by doing this we are not giving a choice in main  to run this function 
    // *** this is Nested in any other function in that class ***   
                 

public:
    void read();
    // void chk_bin();
    void ones_compliment();
    void display();
};

void binary_num ::read()
{
    cout << "Enter the binary number :" << endl;
    cin >> str; // str is assecced because a class members can be assecced by class function
}

void binary_num ::chk_bin()
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) != '0' && str.at(i) != '1')
        {
            cout << "Not a binary number." << endl;
            exit(0);
        }
    }
}

void binary_num ::ones_compliment()
{ 
    chk_bin();
    // Here we have nested chk_bin() func in another function of that class. and this is known as nesting of a function .
    //This is done to those  function which are made private. Because they cannot be assecced directly by any object or function outside the class. 

    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) == '0')
        {
            str.at(i) = '1';
        }
        else
        {
            str.at(i) = '0';
        }
    }
}

void binary_num ::display()
{
    cout << "Here is your binary number:" << endl;
    cout << str<<endl;
}

int main()
{
    binary_num n;

    n.read();
    // n.chk_bin();   
//Now chk_bin() cannot be assecced directly by us because this function is now private to that class and can only be assessed by the members and function os thatt class.
    n.display();
    n.ones_compliment();
    n.display();

    return 0;
}
