#include<stdio.h>

int main(void)
{
    int units;
    double bill;

    printf("enter electricity units consumed:");
    scanf("%d",& units);

    if(units<0)
    {
        printf("units cannot be negative.\n");
        return 0;
    }
    if(units<=50)
      bill=units*1.50;
    else if(units<=150)
      bill=50*1.50+(units-50)*2.50;
    else if(units<=250)
      bill=50*1.50+100*2.50+(units-150)*4.00;
    else
      bill=50*1.50+100*2.50+100*4.00+(units-250)*6.00;
      bill=bill+100.00;
      
    printf("electricity bill=Rs.%2lf\n",bill);

    return 0;
}