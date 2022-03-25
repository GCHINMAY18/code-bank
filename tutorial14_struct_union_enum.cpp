#include <iostream>
using namespace std;

// ********** structures **********

/*
struct employee
{
    int id;
    char favchar;
    float salary;

};
*/

// structure using typdef
/*
typedef struct employee
{
    int id;
    char favchar;
    float salary;

} ep;

int main()
{
    // struct employee e1;           // Without using typedef
    ep e1;                          // this is much simpler for me to declare various variables in structure (By using typedef).

    e1.id = 25;
    e1.favchar = 'a';
    e1.salary = 2500000;
    cout << "The id of employee e1 is : " << e1.id << endl;
    cout << "The favchar of employee e1 is : " << e1.favchar << endl;
    cout << "The salary of employee e1 is : " << e1.salary << endl;

    return 0;
}*/

//********** unions **********
// unions are similar to the structures but in case of unions the memory is not assigned to all the the dyta types inside a union.
// But is assingned according to largest dyta type inside a union .

/*
union driver
{
    int id;
    char name[20];
    int age;
};
*/

/*
// Union using typedef
typedef union driver
{
    int id;
    char name[20];
    int age;
} dvr;

int main()
{
    // union driver d1;
    dvr d1;                 // using typedef

    cout << "Enter name:" << endl;
    cin >> d1.name;
    d1.id = 2;
    d1.age = 35;

    cout << "The id of driver d1 is : " << d1.id << endl;
    cout << "The favchar of driver d1 is : " << d1.name << endl;
    cout << "The salary of driver d1 is : " << d1.age << endl;

    return 0;
}
*/

// ********** enum **********
// Enum are user defined data types that consists of named integrals constants.

enum meal
{
    breakfast,lunch,dinner
};

int main()
{
    cout<<breakfast<<endl;  // we will get integer value of breakfast  as 0 becuse it is an enum; 
    cout<<lunch<<endl;       // we will get integer value of lunch  as 1 becuse it is an enum; 
    cout<<dinner<<endl;      // we will get integer value of dinner  as 2 becuse it is an enum;

    //we can also store this in any anoter int variable
    int m1=breakfast; 
    int m2=lunch; 
    int m3=dinner;

    cout<<m1<<endl; 
    cout<<m2<<endl; 
    cout<<m3<<endl; 
    
    return 0;
}
