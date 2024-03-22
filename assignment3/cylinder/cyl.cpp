
#include "cyl.h"

const double Cylinder::PI=3.14;
        Cylinder::Cylinder():Cylinder(0,0)
        {
          
        }
        Cylinder::Cylinder(double radius, double height):radius(radius),height(height)
        {

        }
        int Cylinder::getRadius()
        {
           return radius;

        }
        void Cylinder::setRadius(int radius)
        {
          this->radius=radius;

        }
        int Cylinder::getHeight()
        {
            return height;
        }
        void Cylinder::setHeight(int height)
        {
            this->height=height;
        }
        double Cylinder::getVolume()
        {
            double volume;

            volume=PI*radius*height;
           
           return volume;
        }
        void Cylinder:: printVolume()
        {
            cout<<"volume is : "<<getVolume()<<endl;
        }
        Cylinder::~Cylinder()
        {
            cout<<"destructor is called"<<endl;
        }
