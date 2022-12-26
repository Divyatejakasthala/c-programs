#include<stdio.h>
int odd(int a)
{
    if(a%2==0)
    printf("even\n");
    else
        printf("odd\n");
}
int main()
{
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    odd(n);
    printf("the number=%d\n",n);
}
