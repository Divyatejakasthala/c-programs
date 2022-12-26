#include<stdio.h>
//#define BITS sizeof(int)*8
int main()
{
    int data,num;
    printf("enter any data:");
    scanf("%d",&num);
data=1<<(sizeof(int)*8-1);
//data=1<<(BITS-1);
    if(num&data)
    {
        printf("msb bit is %d is set",num);
    }
    else
    {
        printf("msb bit i%d not set",num);
    }
}
