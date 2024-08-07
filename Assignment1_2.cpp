/* Write a .cpp file having a employee class contains Data Member and Member function and call these functions in main()
Member Data:
EmpId
EmpName
EmpSalary
two classes (member function):
AcceptData()
PrintData()
*/

#include<iostream>
#include<string>
using namespace std;

class Employee
{
    public:
        int EmpId;
        string EmpName;
        int EmpSalary;

        Employee()
        {
            EmpId;
            EmpName;
            EmpSalary;
        }
    

        void AcceptData()
        {
            cout << "Enter the Employee Id : "<< endl;
            cin >> EmpId;
            cout << "Enter the Employee Name : "<< endl;
            cin >> EmpName;
            cout << "Enter the Employee Salary : "<< endl;
            cin >> EmpSalary;

        }

        void DisplayData()
        {
            cout << "Employee Id : " << EmpId << endl;
            cout << "Employee Name : "<< EmpName << endl;
            cout << "Employee Salary : "<< EmpSalary << endl;
        }

};

int main()
{
    Employee eobj;

    cout << "Employee Information" << endl;
    
    eobj.AcceptData();
    eobj.DisplayData();

    return 0;
}
