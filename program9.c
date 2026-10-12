#include<stdio.h>
int main(void)
{
    int n,temp,digit,count=0,sum=0;
    int i,power;

    printf("enter apositive integer:");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("plase enter a ppositive integer.\n");
        return 0;
    }
    temp=n;
    while(temp>0)
    {
        count++;
        temp=temp/10;
    }
    temp=n;
    while(temp>0)
    {
        digit=temp%10;
        power=1;

        for(i-0;i<count;i++)
          power=power*digit;

        sum=sum+power;
        temp=temp/10;
    }
    if(sum==n)
     printf("%d is an armstrong number.\n",n);
    else
    printf("%d is not an armstrong number.\n",n);

   return 0;
}