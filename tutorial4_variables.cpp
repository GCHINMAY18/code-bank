#include<iostream>
using namespace std;

int glo=5;
void val()
{
    cout<<"Value of global gol is:"<<glo<<"\n";
}
int main()
{
    int a,b;
    int gol=100;
    cout<<"Enter the value of a:\n";
    cin>>a;
    cout<<"Enter the value of b:\n";
    cin>>b;
    cout<< "The value of a is :"<<a<<"\nThe value of b is :"<<b<<endl;
    cout<<"And the sum of a and b is :"<<a+b<<endl;
    
    val();
    cout<<"Value of local gol is :"<<gol<<endl;

    bool x=true;
    cout<<"Boolian is :"<<x;

    return 0;
}
