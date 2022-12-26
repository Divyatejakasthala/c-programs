#include<stdio.h>
struct employee
{
    float salary;
    float g_salary;
};
int main()
{
struct employee e[3];
int i,result;
for(i=1;i<3;i++)
{
    printf("enter a salary:\n");
    scanf("%f",&e[i].salary);
}
printf("employee datails are:\n");
for(i=1;i<3;i++)
{
    if(e[i].salary<=4000)
    {
        e[i].g_salary=(e[i].salary+0.1*e[i].salary)+(e[i].salary+0.5*e[i].salary);
       // e[i].g_salary=e[i].salary+0.5*e[i].salary;
       // result=e[i].g_salary+e[i].g-salary;
        printf("gross salary=%f\n",e[i].g_salary);
    }
    else if(e[i].salary>=4001 && e[i].salary<=8000)
    {
        e[i].g_salary=(e[i].salary+0.2*e[i].salary)+(e[i].salary+0.6*e[i].salary);
        //e[i].g_salary=e[i].salary+0.6*e[i].salary;
        printf("gross salary=%f\n",e[i].g_salary);
    }
    else if(e[i].salary>=8001 && e[i].salary<=12000)
    {
       e[i].g_salary=(e[i].salary+0.25*e[i].salary)+(e[i].salary+0.70*e[i].salary);
        //e[i].g_salary=e[i].salary+0.70*e[i].salary;
        printf("gross salary=%f\n",e[i].g_salary);
    }
    else if(e[i].salary>=12000)
    {
        e[i].g_salary=(e[i].salary+0.30*e[i].salary)+(e[i].salary+0.80*e[i].salary);
       // e[i].g_salary=e[i].salary+0.80*e[i].salary;
        printf("gross salary=%f\n",e[i].g_salary);
    }
}
}


