#include<stdio.h>
int main()
{
    int i=1,num,rem,bin=0;
    printf("enter any decimal number:");
    scanf("%d",&num);
    while(num)
    {
        rem=num%2;
        num=num/2;
        bin=bin+rem*i;
        i=i*10;

    }
    printf(" the binary number is %d",bin);
}
