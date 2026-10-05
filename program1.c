#include<stdio.h>
int main(void)
{
    int a,b;
    
    printf("enter two integer:");
    scanf("%d %d",&a,&b);

    printf("sum=%d\n",a+b);
    printf("difference=%d\n",a-b);
    printf("product=%d\n",a*b);

    if(b!=0)
    {
        printf("quotient=%d\n",a/b);
        printf("remainder=%d\n",a%b);
    }
     else
    {
        printf("division and remainder cannot be performad because the second integer is zero.\n");
    }
    return 0; 
}