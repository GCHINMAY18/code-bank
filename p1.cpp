// Loops practice

#include <iostream>
using namespace std;
/*
int main()
{
    int n, sum = 0;
    cout << "Enter the number till where you want sum of the numbers:" << endl;
    cin >> n;
    cout<<"The numbers are:"<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout<<i;
        sum = sum + i;
    }
    cout <<endl<< "The sum of the numbers is :" << sum << endl;

    return 0;
}
*/

int main()
{
    /*
    int num, fact = 1;
    cout << "Enter the number whose factorial you want:" << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << num << " is: " << fact << endl;
   */

    // GCD
    int n1, n2, gcd,i;
    cout << "Enter both the numbers whose Greatest common divisor you want:" << endl;
    cin >> n1;
    cin >> n2;

    for ( i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
         gcd = i;
        }
    }
    cout << "The GCD of " << n1 << " and " << n2 << " is " << gcd;

    return 0;
}
