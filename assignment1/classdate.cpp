/*Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();*/

#include <iostream>
using namespace std;
bool isLeapYear();
class cppdate
{

private:
    int day;
    int month;
    int year;

public:
    void initDate()
    {
        day = 1;
        month = 1;
        year = 1000;
    }
    void printDateOnConsole()
    {
        cout << "date is : " << day << "/" << month << "/" << year << endl;
    }
    void acceptDateFromConsole()
    {
        cout << "enter day" << endl;
        cin >> day;

        cout << "enter month" << endl;
        cin >> month;

        cout << "enter year" << endl;
        cin >> year;
    }
    bool isLeapYear()
    {
        if(year%100==0 and year%400==0)
        {
            return true;
        }
        else if((year%100)!=0 and year%4==0)
        {
            return true;
        }
        else
        {
            return false;
        }
      
    }
};
int main()
{
     cppdate d;
    int ch;

    do
    {
        cout << " 0--> exit \n 1->initialize the date \n 2-> print date \n 3-> accept date \n 4 -> leap year " << endl;
        cout << "enter choice  :  ";
        cin >>ch;

        switch (ch)
        {
        case 0:
           cout<<"thanks for using"<<endl;
            break;

        case 1:
            d.initDate();
            break;

        case 2:
            d.printDateOnConsole();
            break;

        case 3:
            d.acceptDateFromConsole();
            break;

        case 4:
            if (d.isLeapYear())
            {
                cout << "is a leap year" << endl;
            }
            else
            {
                cout << "not a leap year" << endl;
            }

            break;

        default:
            cout << "please enter a valid choice" << endl;
            break;
        }

    } while (ch != 0);

    return 0;
}
