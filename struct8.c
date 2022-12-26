
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
    int cnt=0;
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
        if(e.sal<10000)
        printf("salary is not in range\n");
     else if(e.sal>100000)
        printf("salary is out of range\n");
        else
        printf("salary within the range\n");
     if(e.id<=9)
        printf("single digit id\n");
        else if(e.id>=10)
        {
            while(e.id)
            {
                e.id=e.id/10;
                cnt++;
            }

        printf("%d digits\n",cnt);
    }
    if(cnt==3)
    printf("invalid id\n");
}

