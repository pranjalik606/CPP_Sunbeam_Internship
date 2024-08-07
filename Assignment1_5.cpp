/*inline function
Write a inline function to calculate area of triangle. Input base and Height from user and print the result.
*/

#include<iostream>
using namespace std;

inline float Area_triangle(float Base, float Height)
{
    return 0.5 * Base * Height;
}

int main()
{
    float Base = 0.0f, Height = 0.0f, Area;

    cout << "Enter a Base : " << endl;
    cin >> Base;
    cout << "Enter a Height : " <<endl;
    cin >> Height;

    Area = Area_triangle(Base, Height);
    cout << "Area of triangle is : " << Area << endl;

    return 0;

}
