#include<stdio.h>
int main()
{
    int n,rem,sum=0,armstrong;
    printf("enter any number:");
    scanf("%d",&n);
    armstrong=n;
    while(n)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(sum==armstrong)
        printf("%d is armstrong\n",n);
        else
            printf("%d is not armstrong\n",n);
    }

