#include<Stdio.h>
int main()
{
    int year;
    printf("enter a year\n");
    scanf("%d",&year);


    if (year%400==0)
    {
        printf("%d is a leap year\n",year);
    }
    else if (year%100==0)
    {
        printf("%d is not a leap year\n",year);
    }
    else if (year%4==0)
    {
       printf("%d is a leap year \n");

    }
    else
    printf("%d is not a leap year\n");
    

    
}