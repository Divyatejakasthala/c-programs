#include<stdio.h>
int convert(int a)
{
    int rem,i=1,bin=0;
    while(a)
    {
    rem=a%2;
    a=a/2;
    bin=bin+rem*1;
    i=i*10;
}
}
int main()
{
    int n,bin;
    printf("enter any decimal number:");
    scanf("%d",&n);
    bin=convert(n);
    printf("the binary number=%ld",bin);
}
