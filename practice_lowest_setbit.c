#include<stdio.h>
#define SIZE 8
int main()
{
    int num,pos,i;
    printf("enter nuber:");
    scanf("%d",&num);
    pos=SIZE-1;
    for(i=0;i<SIZE;i++)
    {
        if((num>>i)&1)
        {
            pos=i;
        break;
        }
    }
printf("%d and %d is lowest order",num,pos);
}
