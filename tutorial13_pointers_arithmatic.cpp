#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << endl << "Enter the size of array you want:- " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter the elements in the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements in the array are:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "The value at " << i << " is: " << arr[i] << endl;
    }

    // now doing pointer arithmatic

    int* x=arr;  //giving pointer to the array


    cout<<endl;
    cout<<"Using pointers arithmatic: "<<endl;
    cout<<"The value of *x is :"<<*x<<endl;
    cout<<"The value of *(x+1) is :"<<*(x+1)<<endl;
    cout<<"The value of *(x+2) is :"<<*(x+2)<<endl;
    cout<<"The value of *(x+3) is :"<<*(x+3)<<endl;
    cout<<"The value of *(x+4) is :"<<*(x+4)<<endl;

    //This is how we use pointer arithmatic and get the value by derefrencing 
    

    return 0;
}
