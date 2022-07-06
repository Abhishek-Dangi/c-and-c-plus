#include<stdio.h>
void  main()
{
    int a,b,c;
char oper;
printf("enter the operator");
scanf("%c",&oper);
printf("enter the value of a and b");
scanf("%d %d",&a,&b);
switch(oper)
{

    case 'A':
    {c=a+b;
    printf("%d",c);
    break;
}


    case 'B':
    {c=a-b;
    printf("%d",c);
    break;
}
default:
{
printf("npthing match");
}
} 
}