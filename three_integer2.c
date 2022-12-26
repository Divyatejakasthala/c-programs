#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a and b values:");
    scanf("%d%d",&a,&b);
    if(a/b!=0)
    {
        printf("%d",b);
    }
    else
        {
        printf("%d",a);
    }
}
