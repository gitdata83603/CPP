/*Q1. Write a class to find volume of a Cylinder by using following members. (volume of
Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI)
Class having following member functions:
Cylinder()
Cylinder(double radius, double height)
getRadius()
setRadius()
getHeight()
setHeight()
getVolume()
printVolume()
Initialize members using constructor member initializer list.
Optional – Use the Modular Apporach*/
#include<iostream>
using namespace std;
class Cylinder
{
  private:
     int radius;
     int height;
     static const double PI; 

  public:
     
        Cylinder():Cylinder(0,0)
        {
          
        }
        Cylinder(double radius, double height):radius(radius),height(height)
        {

        }
        int getRadius()
        {
           return radius;

        }
        void setRadius(int radius)
        {
          this->radius=radius;

        }
        int getHeight()
        {
            return height;
        }
        void setHeight(int height)
        {
            this->height=height;
        }
        double getVolume()
        {
            double volume;

            volume=PI*radius*height;
           
           return volume;
        }
        void printVolume()
        {
            cout<<"volume is : "<<getVolume()<<endl;
        }
        ~Cylinder()
        {
            cout<<"destructor is called"<<endl;
        }
};
const double Cylinder::PI=3.14;
int main()
{
    {
    Cylinder c;
    cout<<"radius  is :"<<c.getRadius()<<endl;
    cout<<"height  is :"<<c.getHeight()<<endl;
     cout<<"volume  is :"<<c.getVolume()<<endl;
    c.printVolume();
    }//destructor will be called here 

    Cylinder c(10,20);
    cout<<"radius  is :"<<c.getRadius()<<endl;
    cout<<"height  is :"<<c.getHeight()<<endl;
     cout<<"volume  is :"<<c.getVolume()<<endl;
    c.printVolume();

    c.setHeight(30);
    c.setRadius(50);
    

    cout<<"radius  is :"<<c.getRadius()<<endl;
    cout<<"height  is :"<<c.getHeight()<<endl;
     cout<<"volume  is :"<<c.getVolume()<<endl;
    c.printVolume();


    return 0;
}