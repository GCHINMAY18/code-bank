//This is about inline function ,defalult and constant arguments 

#include<iostream>
using namespace std;


//******** Inline function ********
//I wrote the theory and information about inline function in my c++ notebook

inline int product(int x ,int y)
{
    return x*y;
}



//******** Default argument ********

//which is declared in the arguments in the function which is defalut in the function arguments .We donot need to pass that when we are calling that in the main() .
//but if we want to change then we can change by also passing that while calling .

//To make this error free we have to make sure that If there is any default argument it should be on the right side in the arguments in a function.
int moneyreceived(int currentmoney, float factor=1.05)
{
    return currentmoney*factor;
}





//******** constant arguments ********

//To make an argument constant we have to use const with the argument .
void length(const char *p)
{
    
}

int main()
{
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;

    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    
    int money;
    cout<<"Enter the money which you will deposite in the bank:"<<endl;
    cin>>money;

    cout<<"Money deposited by the user is : "<<money<<" The user gote after 1 year : "<<moneyreceived(money)<<endl;  //Here the defalt argument is used  in the function.

    //here we change the default argument to 1.08 .By passing it to 
    cout<<"Money deposited by the person working in the bank is : "<<money<<" The bank employee got after 1 year :"<<moneyreceived(money,1.08)<<endl;


    
    return 0;
}
