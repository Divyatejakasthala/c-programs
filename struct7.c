
#include<stdio.h>
struct employee
{
    int id;
    char name[30];
    float sal;
};
int main()
{
    struct employee *ptr,e;
    ptr=&e;
    printf("enter a employee id:\n");
    scanf("%d",&ptr->id);
    printf("enter a employee name:\n");
    scanf("%s",&ptr->name);
    printf("enter employee salary:\n");
    scanf("%f",&ptr->sal);
    printf("the employee details are:\n");
        printf("the employee id=%d\n",ptr->id);
        printf("the employee name=%s\n",ptr->name);
        printf("the employee sal=%f\n",ptr->sal);
        if(e.sal<=10000)
        printf("salary is not in range");
    else if(e.sal>=100000)
        printf("salary is out of range");
        else if(e.sal==0)
        printf("invalid");
    }

