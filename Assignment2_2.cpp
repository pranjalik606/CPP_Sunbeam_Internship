/*Create TDate class having data member day, month, year and following functions.

TDate()
TDate(int day, int month, int year)
AccepDate()
PrintDate_dd_mm_yyyy()          --> Ex = 12-5-2022
PrintDate_dd_month_yyyy()       --> Ex = 2-May-2022
bool ValidateDate()
*/
#include<iostream>
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

    void PrintDate_dd_mm_yyyy()
    {
        cout << day << "-" << month << "-" << year << endl;

    }
    void PrintDate_dd_month_yyyy()
    {
        cout << day << "-";
       
        switch(month)
        {
            case 1:
            cout << "January";
            break;

            case 2:
            cout << "February";
            break;

            case 3:
            cout << "March";
            break;

            case 4:
            cout << "April";
            break;

            case 5:
            cout << "May";
            break;

            case 6:
            cout << "June";
            break;

            case 7:
            cout << "July";
            break;

            case 8:
            cout << "August";
            break;

            case 9:
            cout << "september";
            break;

            case 10:
            cout << "Octomber";
            break;

            case 11:
            cout << "November";
            break;

            case 12:
            cout << "December";
            break;

            default:
            cout << "Invalid Input";
        }
        cout << "-" << year << endl;
    }

    bool ValidateDate()
    {
        if(year < 1)
        {
            return false;
        }

        if (month < 1 || month > 12) 
        {
            return false; 
        }

        int daysInMonth [] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (day < 1 || day > daysInMonth [month - 1])
        {
            return false;
        }
        if(month == 2 && day == 29)
        {
            if((year % 4 != 0) || (year % 100 == 0 && year % 400 != 0))
            {
                return false;
            }
        }
        return true;
    }
    
};

int main()
{
    TDate taobj;

    taobj.AcceptDate();

    if(taobj.ValidateDate())
    {
        cout << "Valid Date : " << endl;
        taobj.PrintDate_dd_mm_yyyy();
        taobj.PrintDate_dd_month_yyyy();
    }
    else
    {
        cout << "Invalid Date" << endl;
    }
    
    return 0;
}