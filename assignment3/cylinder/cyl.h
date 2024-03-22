#ifndef cyl_H
#define cyl_H


#include<iostream>
using namespace std;

class Cylinder
{
  private:
     int radius;
     int height;
     static const double PI; 

  public:
     
        Cylinder();
     
        Cylinder(double radius, double height);
       
        int getRadius();
        
        void setRadius(int radius);
       
        int getHeight();
     
        void setHeight(int height);
      
        double getVolume();
       
        void printVolume();
       
    
};
//const double Cylinder::PI=3.14; we can declare PI here also

#endif;