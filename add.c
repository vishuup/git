#include <stdio.h>
int main ()
{
    int i,a,b,c;
    printf("enter the number");
    printf(" click 1 for add, 2 for subtraction, 3 for multi, 4 for division");
    scanf("%d",&i);
    if (i==1)
    {
        printf("enter the first number");
        scanf("%d",&a);
        printf("enter the second number");
        scanf("%d",&b);
        c=a+b;
        printf("answer is");
        printf("%d",c);
    }
    else if (i==2)
    {
        printf("enter the first number");
        scanf("%d",&a);
        printf("enter the second number");
        scanf("%d",&b);
        c=a-b;
        printf("answer is");
        printf("%d",c);
    }
    else if (i==3)
    {
        printf("enter the first number");
        scanf("%d",&a);
        printf("enter the second number");
        scanf("%d",&b);
        c=a*b;
        printf("answer is"); 
        printf(" %d",c);
    }
    else if(i==4)
    {
        printf("enter the first number");
        scanf("%d",&a);
        printf("enter the second number");
        scanf("%d",&b);
        c=a/b;
        printf("answer is"); 
        printf("%d",c);
    }
    else 
    {
        printf("enter valid number");
    }
    return 0;

}