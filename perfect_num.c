#include<stdio.h>
int main()
{
    int n,i,sum=0,rem;
    printf("enter any number:");
    scanf("%d",&n);
   for(i=1;i<n;i++)
    {
        rem=n%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
        if(sum==n)
        printf("it is a perfect digit number");
    else
        printf("it is not perfect digit number");
}


