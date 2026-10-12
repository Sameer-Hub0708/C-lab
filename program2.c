#include<stdio.h>
int main (void)
{
    double lenght,breadth,radius,base,hight;
    const double PI=3.14159;

    printf("enter rectangle lenght and breadth:");
    scanf("%lf %lf",&lenght,&breadth);

    printf("rectangle area=%.2lf\n",lenght*breadth);
    printf("rectangle perimater=%.2lf\n",2*(lenght+breadth));

    printf("enter circle radius:");
    scanf("%lf",&radius);

    printf("ciecle area=%2lf\n",PI*radius*radius);
    printf("cricle circumference=%.2lf",2*PI*radius);
    printf("enter triangle base and hight:");
    scanf("%lf %lf",&base,&hight);

    printf("triangle area=%2lf\n",0.5*base*hight);
    return 0;
}