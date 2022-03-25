#include <iostream>
using namespace std;

// Function prototyping
/*
SYNTAX:-
type function_name(arguments);
example:-
int sum(int a,int b);---->> Acceptable
int sum(int, int);  ---->> Acceptable
int sum(int a, b);---->> Not  Acceptable
*/

int sum(int, int); // this is function prototyping

int main()
{
    int num1, num2;
    cout << "Enter the value of num1 and num2 :" << endl;
    cin >> num1;
    cin >> num2;

    // num1 and num2 are actual parameters
    cout << "The sum of both the numbers is :" << sum(num1, num2) << endl;

    return 0;
}

int sum(int a, int b)
{
    // Formal parameters a and b will be taking value from actual parameters num1 and num2 .
    int c = a + b;

    return c;
}
