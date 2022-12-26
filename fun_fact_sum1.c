#include<stdio.h>
int fact(int a);
int main()
{
    int sum=0,div=1,i,n;
    printf("enter any factorial number:");
       scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+(fact(i)/(div++));
    }
    printf("the sumof series is %d\n",sum);
}
int fact(int a)
{
    int n,res,i,fact=1;
for(i=1;i<=a;i++)
{
    fact=fact*i;
}
return fact;
}

