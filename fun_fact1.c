#include<stdio.h>
int fact(int a);
int main()
{
    int res,n;
    printf("enter any factorial number:");
       scanf("%d",&n);
       res=fact(n);
    printf("the factoral of %d is = %d\n",n,res);
}
int fact(int a)
{
    int i,fact=1;
for(i=1;i<=a;i++)
{
    fact=fact*i;
}
return fact;
}

