#include <stdio.h>
union student
{
    int roll;
    char name[20];
    float per;
};
int main()
{
    union student e;
    printf("the size of union=%d\n",sizeof(e));
   printf("the size of union data type =%d\n",sizeof(union student));
    printf("enter roll:\n");
    scanf("%d",&e.roll);
    printf("enter student name:\n");
    scanf("%s",&e.name);
    printf("enter a student per:\n");
    scanf("%f",&e.per);
    printf("the student details are:\n");
    printf("a=%d\n",e.roll);
    printf("b=%s\n",e.name);
    printf("c=%f\n",e.per);
}

