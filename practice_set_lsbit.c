#include<stdio.h>
int main()
{
    int data;
    printf("enter any data:");
    scanf("%d",&data);
    if(data&1==1)
    {
        printf("lsb bit is set=%d\n",data);
    }
    else
    {
        printf("lsb bit is not set=%d\n",data);
    }
}
