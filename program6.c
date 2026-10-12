#include<stdio.h>
int main(void)
{
    int choice,a,b;
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("5.remainder\n");
    printf("enter your choice:");
    scanf("%d",&choice);

    printf("enter two integers:");
    scanf("%d %d",&a,&b);

    switch(choice)
    {
        case 1:
           printf("result=%d\n",a+b);
           break;
        case 2:
           printf("result=%d\n",a-b);
           break;
        case 3:
           printf("result=%d\n",a*b);
           break;
        case 4:
           if(b!=0)
            printf("result=%d\n",a/b);
           else
            printf("division by zero is not allowed.\n");
           break;
        case 5:
           if(b!=0)
             printf("result=%d\n",a%b);
           else
             printf("remainder with zero divisor is not allowed.\n");
           break;
        default:
             printf("involid choice.\n");
    }
    return 0;
}