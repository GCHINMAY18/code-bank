#include <iostream>
using namespace std;

int main()
{
    // What are pointers? ----->Pointers is a type of data type which helps us to hold  the address of another data type

    int a = 5;
    int *b = &a;

    // & ---> is a (Address of ) operator
    cout << "the address of  a is : " << &a << endl;
    cout << "the address of  a is : " << b << endl;

    // * ---> (Value at)  is a Dereference operator
    cout << "The value at b is : " << *b << endl;

    // Pointer to pointer
    int **x = &b;
    cout << "The address of b is : " << &b << endl;
    cout << "The address of b is : " << x << endl;
    cout << "The value at address x is : " << *x << endl;
    cout << "The value of the address valur_at  x is : " << **x << endl;

    return 0;
}
