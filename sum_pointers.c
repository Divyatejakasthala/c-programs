#include<stdio.h>
int main()
{
    int *p,*q;
    int a, b,sum;
    printf("enter a and b values:");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    sum=*p+*q;
    printf("%d\n",sum);
}
