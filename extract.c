#include<stdio.h>
int main()
{
int num;
printf("enter any number:");
scanf("%d",&num);
num=~(num+1);
printf("%d\n",num);
}
