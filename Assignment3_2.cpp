/*create Address class having data members cityName ,stateName , Pincode and following functions.
	AcceptAddress ();
	PrintAddress ();

Create a class Student having  data member as name , courseName , Home-address and following functions.
	AcceptStudentData();
	PrintStudentData();
*/

#include<iostream>
using namespace std;

class Address
{
    public:
        string cityName;
        string stateName;
        int Pincode;

    void AcceptAddress()
    {
        cout << "Enter a CityName : " << endl;
        cin >> cityName;
        cout << "Enter a Statename : " << endl;
        cin >> stateName;
        cout << "Enter a pincode : " << endl;
        cin >> Pincode;
    }

    void PrintAddress()
    {
        cout << "CityName = " << cityName << endl;
        cout << "Statename = " << stateName << endl;
        cout << "Pincode = "<< Pincode << endl;
    }
};

class Student
{
    public:
    string name;
    string courseName;
    Address aobj;

    void AcceptStudentData()
    {
        cout << "Enter the name of student : " << endl;
        cin >> name;
        cout << "Enter the course name  : " << endl;
        cin >> courseName;
        aobj.AcceptAddress();
    }

    void printStudentData()
    {
        cout << "name = " << name << endl;
        cout << "course name = "<< courseName << endl;
        aobj.PrintAddress();
    }
};

int main()
{
    // Address aobj;
    // aobj.AcceptAddress();
    // aobj.PrintAddress();

    Student sobj;
    sobj.AcceptStudentData();
    sobj.printStudentData();
    return 0;

}