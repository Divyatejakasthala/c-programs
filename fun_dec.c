#include<stdio.h>
int dec(int a);
int main()
{
    int n,bin;
    printf("enter any decimal number:");
    scanf("%d",&n);
    bin=dec(n);
  //  printf("%d in decimal=%lld in binary",n,bin);
  printf("the decimal numnber=%ld\n",bin);
    return 0;
}
 int dec(int a)
{
    int rem,n,i=1,bin=0;
    while(a)
    {
    rem=a%2;
    a=a/2;
    bin=bin+rem*i;
    i=i*10;
    }
    return bin;
    }

