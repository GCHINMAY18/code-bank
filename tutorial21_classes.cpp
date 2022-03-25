#include <iostream>
using namespace std;




class driver
{
private:
    int id, salary; // I have made id and salary a private function which cannot be defined in the main its definition will be give by any func in class.

public:
    string name;  //in c++ we donot have to make character array to make string in c++
    int num;

    // we can do both complete the function in the class  or we can also complete the function outside the the class .You can see that below .

    void getdata(int a, int b); // here we are only declaring the function
    void setdata()
    {
        cout << "The id of the driver is : " << id << endl;
        cout << "The salary of the driver is : " << salary << endl;
        cout << "The name of the driver is : " << name << endl;
        cout << "The namber of the driver is : " << num << endl;
    }
};

// so here is how we can give definition to  the function which we just declared in the clas
void driver ::getdata(int a, int b)
{
    id = a + 10;
    salary = b + (20 % b);
}



int main()
{
    driver d1;

    // d1.id = 75; //this will give us error because ---> in our class we have declared 'id' as private variable so it will only be accessed 
                  //by another data types and function in that class. 

    cout << "Enter the name of d1 : " << endl;
    cin >> d1.name;
    cout << "Enter the vehicle number :  " << endl;
    cin >> d1.num;

    int uni_income;
    cout << "Enter the minimum salary given to every driver : " << endl;
    cin >> uni_income;

    d1.getdata(2, uni_income);
    d1.setdata();

    return 0;
}
