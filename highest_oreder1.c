#include<stdio.h>
#define SIZE 8
int main()
{
    int pos,num,i;
    printf("enter any number:");
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
        printf("lowest order set bit in %d is %d",num,pos);
    }

