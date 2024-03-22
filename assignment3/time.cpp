/*Q2. Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
Allocate the memory for the the object dynamically and test the functunalities using time ptr.*/

#include<iostream>
using namespace std;

class Time
{
private:
    int hr;
    int min;
    int sec;

public:
    Time():Time(0,0,0)
    {
 
    }
    Time(int h,int m,int s)
    {
        this->hr=h;
        this->min=m;
        this->sec=s;

    }
    int getHour()
    {
        return hr;
    }
    int getMinute()
    {
        return min;
    }
    int getSeconds()
    {
        return sec;
    }
    void printTime()
    {
      cout<<"Time is "<<hr<<":"<<min<<":"<<sec<<endl;
    }
    void setHour(int hr)
    {
        this->hr=hr;

    }
    void setMinute(int min)
    {
        this->min=min;
    }
    void setSeconds(int sec)
    {
        this->sec=sec;
    }
};
int main()
{
    Time *t=new Time(10,40,50);
    t->printTime();
    cout<<"hour : "<<t->getHour()<<endl;
    cout<<"min : "<<t->getMinute()<<endl;
    cout<<"sec : "<<t->getSeconds()<<endl;


    cout<<"updating time values"<<endl;
     
    t->setHour(4);
    t->setMinute(50);
    t->printTime();
    
    delete t;
    t=NULL;

    return 0;
}