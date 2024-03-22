/*Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
day, month, year. Implement the following functions.
*/
#include<stdio.h>
/*
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);   
*/
struct Date
{
  int day;
  int month;
  int year;

};

void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);

void initDate(struct Date* ptrDate)
{
  ptrDate->day=1;
  ptrDate->month=1;
  ptrDate->year=1000;

}
void printDateOnConsole(struct Date* ptrDate)
{
   printf("\ndate is : %d / %d / %d\n",ptrDate->day,ptrDate->month,ptrDate->year);

}
void acceptDateFromConsole(struct Date* ptrDate)
{

   printf("enter day\n");
   scanf("%d",&ptrDate->day);

   printf("enter month\n");
   scanf("%d",&ptrDate->month);


   printf("enter year\n");
   scanf("%d",&ptrDate->year);

}

int main()
{
  struct Date d1;
  int choice;
  printf("welcome\n");
  do
  {
    printf("exit :0\ninitialize date : 1\nprint date : 2\naccept date : 3\n");
    printf("enter choice\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 0:
        printf("thanks for using \n");
        break;

    case 1:
        initDate(&d1);
        break;

    case 2:
        printDateOnConsole(&d1);
        break;

    case 3:
        acceptDateFromConsole(&d1);
        break;           

    default:
        printf("enter a valid choice\n");
        break;
    }

  
  } while (choice!=0);
  
  
  
    return 0;
}