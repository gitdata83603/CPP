/*Q3. Write a menu driven program for Student in CPP language. Create a class student with data
members roll no, name and marks. Implement the following functions
void initStudent();
void printStudentOnConsole();
void acceptStudentFromConsole();*/

#include<iostream>
using namespace std;

class student
{
private:
    int rollno;
    string name;
    int marks;  

public:
    void initStudent()
    {
        rollno=0;
        marks=0;
        name="------";
    }
    void printStudentOnConsole()
    {
      

      cout<<"roll no :"<<rollno<<" name :"<<name<<" marks "<<marks<<endl;

    }
    void acceptStudentFromConsole()
    {
       cout<<"enter roll number\n";
       cin>>rollno;

       cout<<"enter name\n";
       cin>>name;
       
       cout<<"enter marks\n";
       cin>>marks;

    }

};

int main()
{
    student s;
    int ch;
    do
    {
        cout<<"0:exit  1: inititalize student  2: print student  3: accept student "<<endl;
        cout<<"enter choice\n";
        cin>>ch;

        switch (ch)
        {
        case 0:
            cout<<"enter a valid choice"<<endl;
            break;
        
         case 1:
            s.initStudent();
            break;

          case 2:
            s.printStudentOnConsole();
            break;

             case 3:
          s.acceptStudentFromConsole();
            break;   

        
        default:
          cout<<"enter a valid choice"<<endl;
            break;
        }
        


    } while (ch!=0);
    

    return 0;
}