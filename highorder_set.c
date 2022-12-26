#include<stdio.h>
int main()
{
    int pos=-1,num,i;
    printf("enter any number:");
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
