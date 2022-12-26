#include<stdio.h>
struct student {

    int roll;
    char name[10];
    float per;
};
int main()
{
    struct student var[5];
    int i;
    for(i=1;i<5;i++)
    {
        printf("enter roll:\n");
        scanf("%d",&var[i].roll);
        printf("enter name:\n");
        scanf("%s",var[i].name);
        printf("enter per:\n");
        scanf("%f",&var[i].per);
    }
    printf("the student details are:\n");
    for(i=1;i<5;i++)
    {
    printf("r0ll=%d\n",var[i].roll);
        printf("name=%s\n",var[i].name);
            printf("per=%f\n",var[i].per);
}
}
