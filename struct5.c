
#include<stdio.h>
struct student
{

int roll;
char name[20];
float per;
};
int main()
{
struct student *ptr,e;
ptr=&e;
printf("enter a student roll:\n");
scanf("%d",&ptr->roll);
printf("enter a name:\n");
scanf("%s",&ptr->name);
printf("enter a student per:\n");
scanf("%f",&ptr->per);
printf("the students details are:\n");
printf("student roll=%d\n",ptr->roll);
printf("student name=%s\n",ptr->name);
printf("student per=%f\n",ptr->per);
}
