#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a and b values:\n");
    scanf("%d%d",&a,&b);
    printf("before swapping:\n");
    printf("a=%d,b=%d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after swapping:\n");
    printf("a=%d,b=%d\n",a,b);
}
