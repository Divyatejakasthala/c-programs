#include<stdio.h>
int prime(int a)
{
    int i,cnt=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
            cnt++;
    }
    if(cnt==2)
       {
           printf("%d is prime\n",a);
       }
       else
        {
            printf("%d is not prime\n",a);
        }
}
int main()
{
    int n,res;
    printf("enter any number:");
    scanf("%d",&n);
    res=prime(n);
}
