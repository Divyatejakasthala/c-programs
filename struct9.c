
#include<stdio.h>
struct employee
{
    int id;
    char name[30];
    float *sal;
};
int main()
{
    struct employee *ptr,e;
    ptr=&e;
    float sal;
    //int cnt=0;
    printf("enter a employee id:\n");
    scanf("%d",&e.id);
    printf("enter a employee name:\n");
    scanf("%s",&e.name);
    printf("enter employee salary:\n");
    scanf("%f",&sal);
    e.sal=&sal;
    printf("the employee details are:\n");
        printf("the employee id=%d\n",e.id);
        printf("the employee name=%s\n",e.name);
        printf("the employee sal=%f\n",*(e.sal));
}
