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
            CalculateVolume();
        }
        void SetHeight(float h)
        {
            height = h;
            CalculateVolume();
        }
        void SetRadius(float r)
        {
            radius = r;
            CalculateVolume();
        }
        float GetHeight()
        {
            return height;
        }
        float GetRadius()
        {
            return radius;
        }
        void CalculateVolume()
        {
            volume = 3.14159f * radius * radius * height;
        }
        float GetVolume()
        {
            return volume;
        }
};

int main()
{
    cylinder cobj;

    cobj.SetHeight(10.0f);
    cobj.SetRadius(5.0f);

    cout << "Height: " << cobj.GetHeight() << endl;
    cout << "Radius: " << cobj.GetRadius() << endl;

    cobj.CalculateVolume();
    cout << "Volume: " << cobj.GetVolume() << endl;

    return 0;
}
