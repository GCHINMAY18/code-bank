// recurssion with examples

#include <iostream>
using namespace std;

// recurssive approch is prefered in case of factorial finding.
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

int main()
{
    int n;
    cout << "Enter the number whose factorial you want :" << endl;
    cin >> n;

    cout << "The factorial of " << n << " is " << factorial(n) << endl;

    // itrative approch
    /*
    int fact=1;
    for (int  i = n; i >=1 ; i--)
    {
        fact=fact*i;
    }
    cout<<"The factorial of "<<n<<" is "<<fact<<endl;
    */

    return 0;
}
