
/*
******Static data members ******

When a static data member is created, there is only a single copy of the data member
which is shared between all the objects of the class. (In short it become the property of that class.)
and we know that if the data member is non static then every object have an
individual copy.

By making a static variable we can have the count for all the objects we make
we dont have to make counter make the counter up by our selves.

******STATIC METHODS IN C++******

When a static method is created, they become independent of any object and class.
Static methods can only access static data members and static methods.
Static methods can only be accessed using the scope resolution operator.
*/

#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "Enter the id  " << endl;
        cin >> id;
        count++;
    }

    void getdata()
    {
        cout << "The id of the employee " << count << " is : " << id << endl;
    }

    static void getcount()
    {
        // cout<<id; //will throw an error because it is not a static variable
        // And a static function only allows static variable or a static function to access it.

        cout << "The value of the count is : " << count << endl;
    }
};

// Count is a static data member of the employee class
// and a static data member can  be used by doing this .

int employee ::count; // Default value is 0 because is a static variable.

int main()
{
    employee raghav, ayan, anurag;

    raghav.setdata();
    raghav.getdata();
    employee ::getcount(); // if a function is static then it is independent of any object.  
    // It can be assecced by using scope resolution operator. (::) this

    ayan.setdata();
    ayan.getdata();
    employee ::getcount();

    anurag.setdata();
    anurag.getdata();
    employee ::getcount();

    return 0;
}
