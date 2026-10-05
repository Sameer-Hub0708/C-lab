#include<stdio.h>
int main(void)
{
    int n;
    printf("enter an integer:");
    scanf("%d",&n);
    if(n%2==0)
    printf("even number\n");
else
    printf("odd number\n");
return 0;
}