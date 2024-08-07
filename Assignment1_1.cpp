/*Problem Statement : Define a class in C++ for to save time struct members are below.
Ttime class
int hr,min,sec
initTime()  ->0:0:0
acceptTime()
DisplayTime()
increamentTimeBy1Min()
*/

#include<iostream>
using namespace std;

class Ttime
{
    public:
        int Hr;
        int min;
        int sec;

        Ttime()
        {
            Hr = 0;
            min = 0;
            sec = 0;
        }
        
        void initTime()
        {
            Hr = 0;
            min = 0;
            sec = 0;
            
        }

        void acceptTime()
        {
            cout << "Enter a Time : " << endl;
            cin >> Hr;
            cin >> min;
            cin >> sec;
        }

        void DisplayTime()
        {
            //cout << "Display Time : ";
            cout << Hr << ":" << min << ":" << sec << endl;    
        }

        void increamentTimeBy1Min()
        {
            sec++;

            if(sec >= 60)
            {
                sec = 0;
                min++;
            }

            if(min >= 60)
            {
                min = 0;
                Hr++;
            }

            if(Hr >= 24)
            {
                Hr = 0; 
            }
            
        }
};

int main()
{

    Ttime obj1;

    obj1.initTime();
    obj1.DisplayTime();
    obj1.acceptTime();
    obj1.DisplayTime();
    obj1.increamentTimeBy1Min();
    obj1.DisplayTime();


    return 0;
}
