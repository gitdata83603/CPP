/*Q3. Write a class Address with data members (string building, string street, string city ,int pin)
Implement constructors, getters, setters, accept(), and display() methods.
Test the class functunalities by creating the object of class and calling all the functions.*/

#include<iostream>
using namespace std;

class address
{
private:
    
    string building;
    string street;
    string city ;
    int pin;

public:
 
    address(string building="--", string street="--", string city="--" ,int pin=0)
    {
        this->building=building;
        this->street=street;
        this->city=city ;
        this->pin=pin;
    }
    void setbuilding(string building )
    {
        this->building=building;
    }
    void setstreet(string street)
    {
        this->street=street;
    }
    void setcity(string city)
    {
        this->city=city;
    }
    void setpin(int pin)
    {
        this->pin=pin;
    }
    string getbuilding() const
    {
        return this->building;
    }
    string getstreet() const
    {
         return this->street;
    }
    string getcity() const
    {
        return this->city;
    }
    int getpin()const
    {
       return this->pin;
    }
    void accept()
    {
      cout<<"enter building : ";
      cin>>building;
      cout<<"enter street : ";
      cin>>street;
      cout<<"enter city : ";
      cin>>city;
      cout<<"enter pin : ";
      cin>>pin;


    }
    void display()
    {

        cout<<"building : "<<building<<" , "<<"street : "<<street<<" , "<<"city : "<<city<<" , "<<"pin : "<<pin<<endl;  

    }
    ~address()
    {


    }
};

int main()
{

    address a;      //initialized with default values
    
    string b;
    int p;

    a.display();

    a.accept();

    a.display();

    cout<<"getting fragmented details : "<<endl;
    cout<<"building : "<<a.getbuilding()<<endl;
    cout<<"street : "<<a.getstreet()<<endl;
    cout<<"city : "<<a.getcity()<<endl;
    cout<<"pin : "<<a.getpin()<<endl;


    cout<<"changing details :"<<endl;


    cout<<"enter bulding : ";
    cin>>b;
    a.setbuilding(b);
    cout<<"building is changed to : "<<a.getbuilding()<<endl;
    a.display();

    cout<<"enter street : ";
    cin>>b;
    a.setstreet(b);
    cout<<"street is changed to : "<<a.getstreet()<<endl;
    a.display();

    cout<<"enter city : ";
    cin>>b;
    a.setcity(b);
    cout<<"city is changed to : "<<a.getcity()<<endl;
    a.display();


    cout<<"enter pin : ";
    cin>>p;
    a.setpin(p);
    cout<<"pin is changed to : "<<a.getpin()<<endl;
    a.display();


    return 0;
}


