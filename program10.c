#include<stdio.h>

int main(void)
{
    int n,i,flag=1;
    int lower,upper,num,temp;
     printf("enter an integer to test for prime:");
     scanf("%d",&n);
      if(n<2)
      {
       flag=0;
      }
      else
      { 
        for(i=2;i<=n/2;i++)
        {
         if(n%i==0)
        {
         flag=0;
           break;
        }
        }
      }    

if(flag)
 printf("%d is a prime.\n",n);
else
 printf("%d is not prime.\n",n);

 printf("enter lower and upper limits:");
 scanf("%d %d",&lower,upper);

 if(lower>upper)
 {
    temp=lower;
    lower=upper;
    upper=temp;
 }
 printf("prime number betwen %d andn %d are:\n",lower,upper);
 for(num=lower;num<=upper;num++)
 {
    if(num<2)
    continue;

    flag=1;

    for(i=2;i<num/2;i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag)
     printf("%d",num);
 }
 printf("\n");
  return 0;
}