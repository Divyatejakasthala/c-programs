#include <stdio.h>
union student
{
    int roll;
    char name[20];
    float per;
};
int main()
{
    union student  var;
    printf("enter a student roll:");
    scanf("%d",&var.roll);
    printf("enter a student name:");
    scanf("%s",var.name);
    printf("enter a student per:");
    scanf("%f",&var.per);
    printf("the student details are:");
    printf("roll=%d\n",var.roll);
    printf("name=%s\n",var.name);
    printf("per=%f\n",var.per);
}

