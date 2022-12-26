#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int n1,n2,res;
    printf("enter n1 and n2:");
    scanf("%d%d",&n1,&n2);
    res=sum(n1,n2);
    printf("the sum of n1 and n2=%d\n",res);
}
