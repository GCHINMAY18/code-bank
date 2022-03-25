#include <iostream>
using namespace std;

int main()
{
    /*
    int n, rev = 0;
    cout << "We reversing a number." << endl;
    cout << "Enter a number to reverse: " << endl;
    cin >> n;

    while (n != 0)
    {
        int r = n % 10;
        rev = (rev * 10) + r;
        n = n / 10;
    }
    cout<<"reversed number is :"<<rev<<endl;
    */

    int n, i = 0, swap;
    cout << "Enter the number of elements in an array you want:" << endl;
    cin >> n;

    int num[n];
    cout << "Now enter the array elements :" << endl;
    while (i < n)
    {
        cin >> num[i];
        i++;
    }
    cout << "So, the array we have is :" << endl;
    for (i = 0; i < n; i++)
    {
        cout << num[i] << endl;
    }

    // now bubble sort

    /*
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                swap = num[j];
                num[j] = num[j + 1];
                num[j + 1] = swap;
            }
        }
    }
    */
    // selection sort
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[j] < num[i])
            {
                swap = num[i];
                num[i] = num[j];
                num[j] = swap;
            }
        }
    }

    cout << "The sorted array is :" << endl;
    for (i = 0; i < n; i++)
    {
        cout << num[i] << endl;
    }

    return 0;
}
