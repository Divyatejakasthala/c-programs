#include<stdio.h>
struct student
{
    int age;
    char name[20];
    float per;
};
int main()
{
    struct student e;
        printf("enter student age:\n");
        scanf("%d",&e.age);
        printf("enter a student name:\n");
        scanf("%s",&e.name);
        printf("enter a student per:\n");
        scanf("%f",&e.per);
    if(e.per<=35)
    {
        printf("fail\n");
    }
    else if(e.per>=36 && e.per<=50)
    {
        printf("grade C\n");
    }
    else if(e.per>=51 && e.per<=61)
    {
        printf("grade B\n");
    }
    else if(e.per>=62 && e.per<=72 )
    {
        printf("grade B+\n");
    }
    else if(e.per>=73 && e.per<=80)
    {
        printf("grade A \n");
    }
    else if(e.per>=81 && e.per<=90)
    {
        printf("grade A+\n");
    }
    else if(e.per>=91)
    {
        printf("grade O\n");
    }
    else
    {
    printf("invalid");
    }
printf("the student detailse are:\n");
printf("student age=%d\n",e.age);
printf("student name=%s\n",e.name);
printf("student per=%f\n",e.per);

}
