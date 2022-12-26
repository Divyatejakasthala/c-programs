#include<stdio.h>
union student
{
    int roll;
    char name[20];
    char department[20];
    float per;
};
int main()
{
union student var1,var2;
printf("enter student1 details:\n");
printf("enter a roll:");
scanf("%d",&var1.roll);
printf("enter name:");
scanf("%s",var1.name);
printf("enter a department:");
scanf("%s",var1.department);
printf("enter per:");
scanf("%f",&var1.per);
printf("enter student2 details:\n");
printf("enter a roll:");
scanf("%d",&var2.roll);
printf("enter name:");
scanf("%s",var2.name);
printf("enter a department:");
scanf("%s",var2.department);
printf("enter per:");
scanf("%f",&var2.per);
printf("the 2 student details are:\n");
printf("first student roll=%d\n",var1.roll);
printf("first student name=%s\n",var1.name);
printf("first student per=%f\n",var1.per);
printf("second student roll=%d\n",var1.roll);
printf("second student name=%s\n",var1.name);
printf("second student per=%f\n",var1.per);
}
