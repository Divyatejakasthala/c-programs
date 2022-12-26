#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    float sal;
};
struct company
{
    char name[20];
    struct employee e;
};
int main()
{
    struct company c;
    printf("enter company name:");
    scanf("%s",c.name);
    printf("enter id:\n");
    scanf("%d",&c.e.id);
    printf("enter a name:\n");
    scanf("%s",c.e.name);
    printf("enter a sal:\n");
    scanf("%f",c.e.sal);
    printf("the employee details are:\n");
    printf("name=%s\n",c.name);
    printf("id=%d\n",c.e.id);
    printf("namme=%s\n",c.e.name);
    printf("sal=%f\n",c.e.sal);
}
