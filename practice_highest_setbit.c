#include<stdio.h>
int main()
{
    int num,i,pos=0;
    printf("enter any decimal number:");
    scanf("%d",&num);
    for(i=0;i<8;i++)
    {
        if((num>>i)&1)
            pos=i;
        }
    if(num!=pos)
    {
        printf("%d and %d highest order",num,pos);
    }
    else
    {
        printf("no set bits");
    }
}
