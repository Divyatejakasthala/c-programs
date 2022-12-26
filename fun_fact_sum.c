#include<stdio.h>
int fact(int a)
{
    int fact=1,i;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,i,sum=0,div=1;
    printf("enter a any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(fact(i)/(div++));
    }
    printf("the sum of the series:%d\n",sum);
}
