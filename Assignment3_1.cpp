/*Create a TDate class having members day, month, year and following functions 
    AcceptDate()
    PrintDate()
Create a class person Having data member as name, age, date_of_birth and following funtions.
    AcceptPersonData();
    PrintPersonData();
*/

#include<iostream>
#include<string>
using namespace std;

class TDate
{
    public:
      int day;
      int month; 
      int year;

    TDate()
    {
       day = 0;
       month = 0; 
       year = 0; 

    }
    TDate(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void AcceptDate()
    {
        cout << "Enter a Day between 1 to 31 : " << endl;
        cin >> day;
        cout << "Enter a Month between 1 to 12 : " << endl;
        cin >> month;
        cout << "Enter a year : " << endl;
        cin >> year;
    }

    void PrintDate()
    {
        cout << "Date of Birth = " << day << "-" << month << "-" << year << endl;
    }
};

class person
{
    public:
        string name;
        int age;
        TDate tobj1;

    void AcceptPersonData()
    {
        cout << "Enter a name of Person : " << endl;
        cin >> name;
        cout << "Enter a age of Person : " << endl;
        cin >> age;
        tobj1.AcceptDate();
    }

    void PrintPersonData()
    {
        cout << "Name = " << name << endl;
        cout << "Age = " <<age << endl;
        tobj1.PrintDate();
    }
};

int main()
{
    // TDate tobj1;
    // tobj1.AcceptDate();
    // tobj1.PrintDate();

    person p1;
    p1.AcceptPersonData();
    p1.PrintPersonData();

    return 0;
}


