#include<stdio.h>
int odd(int a);
int main()
{
    int n;
    printf("enter any numbre:");
    scanf("%d",&n);
    odd(n);
    printf("the number is =%d\n",n);
}
int odd(int a)
{
    if(a%2==1)
        printf("given number is odd\n");
    else
        printf("given number is even\n");
}

