
#include<stdio.h>
struct employee {

    int empno;
    char name[10];
    float sal;
};
int main()
{
    struct employee e[5];
    int i;
    for(i=1;i<5;i++)
    {
        printf("enter empno:\n");
        scanf("%d",&e[i].empno);
        printf("enter name:\n");
        scanf("%s",e[i].name);
        printf("enter sal:\n");
        scanf("%f",&e[i].sal);
    }
    printf("the employee details are:\n");
    for(i=1;i<5;i++)
    {
    printf("empno=%d\n",e[i].empno);
        printf("name=%s\n",e[i].name);
            printf("sal=%f\n",e[i].sal);
}
}
