/*Function overloading
Write a function 'Sum' which is able to add
3 int value and 1 float value
3 int value and 2 float value
1 int value and 3 float value
4 int value
4 float value
*/

#include<iostream>
using namespace std;

void Sum(int iNo1, int iNo2, int iNo3, float fNo1)
{
    cout << " Sum is : " << (iNo1+iNo2+iNo3+fNo1) << endl;
}

void Sum(int iNo1, int iNo2, float fNo1, float fNo2)
{
    cout << " Sum is : " << (iNo1+iNo2+fNo1+fNo2) << endl;
}

void Sum(int iNo1, float fNo1, float fNo2, float fNo3)
{
    cout << " Sum is : " << (iNo1+fNo1+fNo2+fNo3) << endl;
}

void Sum(int iNo1, int iNo2, int iNo3, int iNo4)
{
    cout << " Sum is : " << (iNo1+iNo2+iNo3+iNo4) << endl;
}

void Sum(float fNo1, float fNo2, float fNo3, float fNo4)
{
    cout << " Sum is : " << (fNo1+fNo2+fNo3+fNo4) << endl;
}

int main()
{
    Sum(10, 30, 20, (float)40.09);
    Sum(23, 56, (float)23.45, (float)45.34);
    Sum(98, (float)79.98, (float)98.78, (float)33.65);
    Sum(98, 3, 56, 34);
    Sum((float)2.4, (float)6.8, (float)34.67, (float)6.78);

    return 0;
}



