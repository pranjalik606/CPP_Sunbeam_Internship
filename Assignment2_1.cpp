/*Menu Driven Code
Write a 4 function calculator by using menu friven code by taking choice from user for calculation
(Use Enum, while Loop, switch)
*/

#include<iostream>
#include<stdlib.h>
using namespace std;
enum calculator{ADD=1,SUB,MUL,DIV,OUT};

int Addition(int iNo1, int iNo2)
{
    return iNo1 + iNo2;
}

int Substraction(int iNo1, int iNo2)
{
    return iNo1 - iNo2;
}

int Multiplication(int iNo1, int iNo2)
{
    return iNo1 * iNo2;
}

float Division(int iNo1, int iNo2)
{
    return iNo1 / iNo2;
}

void Display()
{
    int option;
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iAns = 0;
    int option;

    cout << "Enter a First Number : " << endl;
    cin >> iValue1;

    cout << "Enter a Second number : " << endl;
    cin >> iValue2;

    while(true)
    {
        cout << "Enter a option that you want to perform : "<< endl;
        cout << "for Addition Press : 1" << endl;
        cout << "for Substarction Press : 2" << endl;
        cout << "for Multiplication Press : 3" << endl;
        cout << "for Division Press : 4" << endl;
        cout << "for Exit press : 5" << endl;
        cin >> option;

        switch(option)
        {
            case ADD:
            iAns = Addition(iValue1, iValue2);
            cout << "Addition is : " << iAns << endl;
            break;

            case SUB:
            iAns = Substraction(iValue1, iValue2);
            cout << "Substarction is  : " << iAns << endl;
            break;

            case MUL:
            iAns = Multiplication(iValue1, iValue2);
            cout << "Multiplication is : " << iAns << endl;
            break;

            case DIV:
            iAns = Division(iValue1, iValue2);
            cout << "Division is  : " << iAns << endl;
            break;

            case OUT:
            cout << "Thank you for using our Application" << endl;
            exit(0);

            default:
            cout << "Invalid option Entered please Enter correct option" << endl; 

        }
        
    }
    return 0;

}