#include<stdio.h>
struct worker
{
    char name[20];
    int wage;
    int days;
};
int main()

{
struct worker a,b;
int result1,result2;
printf("enter first worker deatails:\n");
printf("enter worker name:");
scanf("%s",a.name);
printf("enter wages:");
scanf("%d",&a.wage);
printf("enter days:");
scanf("%d",&a.days);
printf("the second worker details:\n");
printf("enter second worker name:");
scanf("%s",b.name);
printf("enter second worker wages:");
scanf("%d",&b.wage);
printf("enter second worker days:");
scanf("%d",&b.days);
printf("the two worker details are:\n");
result1=a.wage*a.days;
result2=b.wage*b.days;
printf("1st worker name=%s\n,1st worker salary=%d\n",a.name,result1);
printf("2nd worker name=%s\n,2nd worker salary=%d\n",b.name,result2);
}
