#include "cyl.h"
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