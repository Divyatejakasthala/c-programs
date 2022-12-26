#include<stdio.h>
int fact(int a)
{
    int i,fact=1;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,res;
    printf("enter any number:");
    scanf("%d",&n);
    res=fact(n);
    printf("the factorial of %d is = %d\n",n,res);
}
