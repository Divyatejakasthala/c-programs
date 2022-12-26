#include<stdio.h>
int arm(int a)
{
    int rem,sum=0,armstrong;
    armstrong=a;
    while(a)
    {
        rem=a%10;
        sum=sum+rem*rem;
        a=a/10;
    }
    if(armstrong==sum)
        printf("armstrong\n");
    else
        printf("not armstrong");
}
int main()
{
    int n,res;
    printf("enter 2 digit number");
    scanf("%d",&n);
    res=arm(n);
}
