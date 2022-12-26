#include<stdio.h>
int main()
{
    int a,b,temp,gcd,lcm,x,y;
    printf("enter a and b values:\n");
    scanf("%d%d",&x,&y);
    x=a;
    y=b;
    while(b!=0)
    {
        temp=a;
        a=a%b;
        b=temp;
    }
    gcd=a;
    lcm=(x*y)/gcd;
    printf("the gcd of %d and %d=%d\n",x,y,gcd);
    printf("the lcm of %d and %d=%d\n",x,y,lcm);
}
