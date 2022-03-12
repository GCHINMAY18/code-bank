#include<iostream>
using namespace std;

int c =56;

int main()
{
    int a=10,b=5;
    cout<<"\nDetailed overview about operators is below."<<endl;
    
    cout<<"Arethmatic operators:"<<endl;
    cout<<"1.a+b is:"<<a+b<<endl;
    cout<<"2.a-b is:"<<a-b<<endl;
    cout<<"3.a*b is:"<<a*b<<endl;
    cout<<"4.a/b is:"<<a/b<<endl;
    cout<<endl;

    //Comparision  operators 
    cout<<"The value of  a==b is :"<<(a==b)<<endl;
    cout<<"The value of  a<=b is :"<<(a<=b)<<endl;
    cout<<"The value of  a>=b is :"<<(a>=b)<<endl;
    cout<<"The value of  a<b is :"<<(a<b)<<endl;
    cout<<"The value of  a>b is :"<<(a>b)<<endl;

    
    int c=a+b;
    cout<<"The value of c is the sum of a and b:"<<c<<endl;
    cout<<"The value of global c is :"<<::c<<endl;// We have printed the global value of c insted of the local scope value by the help of the (SCOPE RESOLUTION OPERATOR(::))
    return 0;
}
