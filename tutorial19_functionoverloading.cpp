

// Function overloading is a feature of object oriented programming where 2 or more function can have same name but different arguments .

#include <iostream>
using namespace std;

// example 1
int sum(int a, int b)
{
    cout << "This sum functins have 2 arguments." << endl;

    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "This sum functins have 3 arguments." << endl;

    return a + b + c;
}

// example 2
// for volume of cube  which have 1 arguments
int volume(int a)
{
    return (a * a * a);
}

// for volume of cylinder which have 2 arguments
int volume(int r, int h)
{
    return (3.14 * r * r * h);
}

// for volume of cuboid which have 3 arguments
int volume(int l, int b, int h)
{
    return (h * b * h);
}

int main()
{
    cout << "The sum of 3 and 10 is : " << sum(3, 10) << endl;
    cout << "The sum of 1 and 25 and -4 is : " << sum(1, 25, -4) << endl;
    cout << "The volume of cube with side : 4 is : " << volume(4) << endl;                                    // Will see  1 argument and will execute volume function with 1 argument
    cout << "The volume of cuboid with length :5,bredth :2 and hight : 12 is : " << volume(5, 2, 12) << endl; // Will see  3 argument and will execute volume function with 3 argument
    cout << "The volume of cylinder with radius :9 and hight : 7 is : " << volume(9, 7) << endl;              // Will see  2 argument and will execute volume function with 2 argument

    return 0;
}
