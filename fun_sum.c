#include<stdio.h>
int sum(int a,int b);
int main()
{
    int n1,n2,res;
    printf("enter n1 and n2 values:");
    scanf("%d%d",&n1,&n2);
    res=sum(n1,n2);
    printf("the sum of n1 and n2=%d\n",res);
}
int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
