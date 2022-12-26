#include<stdio.h>
int perfect_num(int a);
int main()
{
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    perfect_num(n);
}
int perfect_num(int a)
{
    int i,sum=0,rem;
    for(i=1;i<a;i++)
    {
        rem=a%i;
        if(rem==0)
    {
        sum=sum+i;
    }
    }
    if(sum==a)
    printf("perfect digit number");
    else
        printf("not perfect");
    }
