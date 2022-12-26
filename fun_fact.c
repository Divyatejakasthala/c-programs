#include<stdio.h>
int main()
{
    int fact=1,i,n,res;
    printf("enter any numbre:");
    scanf("%d",&n);
      for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    printf("the factorial of %d is %d\n",n,fact);
}
