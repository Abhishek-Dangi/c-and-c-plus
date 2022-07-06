#include<stdio.h>
void main()
{
    char operation;
    printf("enter the operator (T S C)\n");
    scanf("%c", &operation);

    switch(operation)
    {
    case 'T':
    {
    int he , bas , area;
    printf("enter the height of tringle\n ");
    scanf("%d", &he);
    printf("enter the base of tringle\n ");
    scanf("%d", &bas);
    area = he*bas/2;
    printf("area of tringle is %d", area);
    break;
    }
    case 'S':
    {
    int side , area;
    printf("enter the one side of square:\n");
    scanf("%d",&side);
    area = side*side;
    printf("area of a square is %d",area);
    break;
    }
    case 'C':
    {
    int area , rid;
    float pie = 3.14159;
    printf("enter the radius of circle \n");
    scanf("%d", &rid);
    area = pie*rid*rid;
    printf("area of circle is %d", area);
    break ;
    } 
    
    default:{

    
    printf("operation is does not axist\n");
        break;
    }
    }
}