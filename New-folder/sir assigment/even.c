#include<stdio.h>
void main()
{
    int i,num;
    printf("enter the number:\n");
    scanf("%d",&num);

    i = 1;
    while(i<=num)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        
        i++;

    }
}