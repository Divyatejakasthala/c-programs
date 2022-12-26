#include<stdio.h>
int squre(int a);
int main()
{
    int n,res;
    printf("enter any number:");
    scanf("%d",&n);
    res=squre(n);
    printf("the squre= %d\n",res);
}
int squre(int a)
{
    int c;
    c=a*a;
    return c;
}
