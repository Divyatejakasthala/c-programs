#include<stdio.h>
int main()
{
    int num,i;
    printf("enter any number:");
    scanf("%d",&num);
    for(i=sizeof(int)*8-1;i>=0;i--)
    {

        if((num>>i)&1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}
