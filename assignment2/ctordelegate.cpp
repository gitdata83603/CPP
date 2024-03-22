/*Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
Create the local objects in respective case and call the function to caluclate area.
Menu options ->
1. Calculate Volume with default values
2. Calculate Volume with length,breadth and height with same value
3. Calculate Volume with different length,breadth and height values.*/

#include<iostream>
using namespace std;
class box
{
   private:
        int length;
        int width;
        int height;
    
   public:
        box():box(1,1,1)        //constructor delegation
        {
                          

        }
        box(int length,int width,int height)
        {
            this->length=length;
            this->height=width;
            this->width=height;

        }
        box(int value):box(value,value,value)       //constructor delegation
        {
           
        }
        int volume()
        {

          return length*width*height;

        }
        ~box()
        {
           
           cout<<"destructor called"<<endl;

        }


};
int main()
{
    int choice;
    do
    {
        cout<<"0 : exit  1 : volume with default values  2 : volume with same value  3: volume with user defined values"<<endl;
        cout<<"enter choice : ";
        cin>>choice;

        switch (choice)
        {

        case 0:
            cout<<"thanks for using"<<endl;
            break;

        case 1:
            cout<<"result of volume of box with default values :";
            {
               box b;
               cout<<"volume is : "<<b.volume()<<endl;

            }//destructor will be called here as object goes out of scope here
            break;

        case 2:
            
            cout<<"volume with same value of length,width and height : "<<endl;
           
            {
               int l;
               cout<<"enter the same value for all length,width and height"<<endl;
               cin>>l;
               box b(l);
               cout<<"volume is : "<<b.volume()<<endl;

            }//destructor will be called here as object goes out of scope here
            break;

        case 3:
         
           
            {
              int l,w,h;
              cout<<"enter value for length,width and height : "<<endl;
              cin>>l>>w>>h;
               box b(l,w,h);
               cout<<"volume is : "<<b.volume()<<endl;

            }//destructor will be called here as object goes out of scope here
            break;


        
        default:
            cout<<"enter a valid choice"<<endl;
            break;
        }

    } while (choice!=0);
    

    return 0;
}