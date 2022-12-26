#include <stdio.h>
int fact(int a);
int main()
{
   int n,res;
   printf("enter number:");
   scanf("%d",&n);
   res=fact(n);
   printf("%d %d\n",n,res);
}
int fact(int a)
{
    int c;
    if(a==0)
    {
    return 1;
    }
    else
    {
        return(a*fact(a-1));
    }
}
