#include<stdio.h>
int per_digit(int a);
int main()
{
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    per_digit(n);
}
int per_digit(int a)
{
int i=1,sum=0;
    while(i<a)
    {
    if(a%i==0)
            sum=sum+i;
            i++;
        }
if(sum==a)
        printf("%d is perfect number",a);
    else
        printf("%d is not perfect digit",a);
}
