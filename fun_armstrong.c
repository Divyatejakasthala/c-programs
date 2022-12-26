#include<stdio.h>
int armstr(int a);
int main()
{
    int n,res;
    printf("enter 3 digit number:");
    scanf("%d",&n);
    res=armstr(n);
}
int armstr(int a)
{
    int rem,armstrong,sum=0;
    armstrong=a;
    while(a)
    {
        rem=a%10;
        sum=sum+rem*rem*rem;
        a=a/10;
    }
    if(armstrong==sum)
        printf("armstrong\n");
    else
        printf("not armstrong\n");
}
