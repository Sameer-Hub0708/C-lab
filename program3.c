#include<stdio.h>
int main(void)
{
    float marks[5],total=0.0f,percentage;
    int i,faild=0;

    printf("enter marks in five subjects(each out of 100):\n");

    for(i=0; i<5; i++)
    {
        printf("subjectb %d:",i+1);
        scanf("%f",&marks[i]);

        total=total+marks[i];

        if(marks[i]<35)
         faild=1;
    }
    percentage=total/5.0f;

    printf("total=%.2f/;500\n",total);
    printf("percentage=%.2f%%n",percentage);

    if(faild)
    printf("result=fail\n");
else if(percentage>=75)
    printf("result=distinction\n");
else if(percentage >=60)
    printf("result=first class\n");
else if (percentage>=50)
    printf("result=second class\n");
else 
    printf("result=pass class\n");

    return 0;
}