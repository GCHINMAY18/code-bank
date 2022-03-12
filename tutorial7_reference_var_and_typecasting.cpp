#include <iostream>
using namespace std;

int main()
{

    //********** float, double and long double literals **********

    float a = 36.7f;
    long double b = 34.7L;

    // In c++ decimal numbers are take as double  defaltly not float by the compiler

    cout << "The size of 34.7 is " << sizeof(36.7) << endl;
    cout << "The size of 34.7f is " << sizeof(36.7f) << endl;
    cout << "The size of 34.7F is " << sizeof(36.7F) << endl;
    cout << "The size of 34.7l is " << sizeof(36.7l) << endl;
    cout << "The size of 34.7L is " << sizeof(36.7L) << endl;

    // IT WILL GIVE OUT PUT AS
    //  The size of 34.7 is 8 (BeauseIn c++ decimal numbers are take as double  defaltly not float by the compiler)

    // (We can change the type by using literals )

    // The size of 34.7f is 4 (Double changed to float by using (f))
    // The size of 34.7F is 4 (Double changed to float by using (F))
    // The size of 34.7l is 12 (Double changed to long  by using (l))
    // The size of 34.7L is 12 (Double changed to long by using (L))  //we can use any small or capital as literal

    // ********** Reference Variable  **********
    int x = 65;
    int &y = x;
    cout << "The Value of x is :" << x << endl;
    cout << "The Value of y is :" << y << endl<< "Which is obtaind by x because x and y are same but only their name is different.Because we used reference variable ." << endl;

    //********** Typecasting **********

    int c = 45;
    float d = 45.94;

    cout << "The value of c before typecasing :" << c << endl;
    cout << "The value of c after  typecasing :" << (float)c << endl;      // here the c is typecasted in float from int. c will be taken as float in this line
    cout << "The value of c after  typecasing :" << float(c) << endl;      // here the c is typecasted in float from int. c will be taken as float in this line

    cout << "The value of d before typecasing :" << d << endl;
    cout << "The value of d after  typecasing :" << (int)c << endl;      // here the d is typecasted in int  from float . d will be taken as int in this line.
    cout << "The value of d after  typecasing :" << int(c) << endl;      // here the d is typecasted in int  from float . d will be taken as int in this line.

    // Can also be typecasted by
    //    int g=int(b);
    //    int g=(int)b;

    cout << "The value of exprassion -  c + d :" << c + d << endl;
    cout << "The value of exprassion -  c + (int)d  :" << (c + (int)d) << endl;      // Here d is typecasted into int from float.
    cout << "The value of exprassion -  c + int(d) " << (c + int(d)) << endl;        // Here d is typecasted into int from float.

    return 0;
}
