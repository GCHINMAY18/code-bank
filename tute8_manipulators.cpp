#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    //Mnipulators without arguments 
    //1. endl
    //2. ws - to remove the wide spaces 
    //3. ends- it inserts a null character into the output stream.
    //         It typically works with std::ostrstream, when the associated output buffer needs to be null-terminated to be processed as a C string.

    cout<< "WE got new line by using endl"<<endl;

    //Manipulators with arguments 

    int a=65;
    float b=50.2;
    char x='a';

    cout<<"The value of a without setw is :"<<a<<endl;
    cout<<"The value of b without setw is :"<<b<<endl;
    cout<<"The value of x without setw is :"<<x<<endl;

    cout<<"The value of a with setw is :"<<setw(3)<<a<<endl;
    cout<<"The value of b with setw is :"<<setw(6)<<b<<endl;
    cout<<"The value of x with setw is :"<<setw(4)<<x<<endl;
    
    return 0;
}
