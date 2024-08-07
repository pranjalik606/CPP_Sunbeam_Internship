/*Write a class of cylinder using following members

Data members:
    height, radius, volume
member function:
    Cylinder()
    Cylinder(height, radius)
    SetHeight(int h)
    SetRadius(int r)
    GetHeight()
    GetRadius()
    CalculateVolume()
    GetVolume()
*/

#include<iostream>
using namespace std;

class cylinder
{
    public:
        float height;
        float radius;
        float volume;

        cylinder()
        {
            height = 0.0f;
            radius = 0.0f;
            volume = 0.0f;
        }
        cylinder(float height, float radius)
        {
            this->height = height;
            this->radius = radius;
        }
        void SetHeight(float h)
        {

        
        }
        void SetRadius(float r)
        {


        }
        void GetHeight()
        {


        }
        void GetRadius()
        {


        }
        void CalculateVolume()
        {


        }
        void GetVolume()
        {



        }
}

int main()
{

    cylinder cobj;

    cobj.SetHeight();
    cobj.SetRadius();
    cobj.GetHeight();
    cobj.GetRadius();
    cobj.CalculateVolume();
    cobj.GetVolume();

    return 0;
}