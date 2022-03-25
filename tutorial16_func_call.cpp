#include<iostream>
using namespace std;


int sum(int a,int b)
{
    int c=a+b;
    return c;
}


//Call by value (will not swap)
void swap(int a, int b)
{
    int  temp=a;
    a=b;
    b=temp;
}

//Call by reference using pointers    (will swap)
void swappointer(int* a, int* b)
{
    int  temp=*a;
    *a=*b;
    *b=temp;
}


//Call by reference using c++ reference variables  (will swap)
void swapreferencevar(int &a, int &b)
{
    int  temp=a;
    a=b;
    b=temp;
}

int main()
{
    int x,y;
    cout<<"Enter the value of x and y:"<<endl;
    cin>>x;
    cin>>y;
    // cout<<"The sum of x and y will be "<<sum(x,y)<<endl;

    cout<<"The value of x is "<<x<<" and the calue of y is  "<<y<<endl;
    swap(x,y);//This will not swap x and y because we cannot not change the value by call by value method.

    swappointer(&x,&y);         //This will swap x and y using pointer reference

    swapreferencevar(x,y);  //This will swap x and y using reference variable

    cout<<"\nAfter swapping The value of x is "<<x<<" and the calue of y is  "<<y<<endl;

    
    return 0;
}
