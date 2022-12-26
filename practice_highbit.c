#include<stdio.h>
int main()
{
    int num,pos=-1,i;
    printf("enter any number:");
    scanf("%d",&num);
    for(i=0;i<8;i++)
    {
        if((num>>i)&1)
            pos=i;
    }
    if(num!=pos)
    {
        printf("%d %d pos is high",num,pos);
    }
    else
    {
        printf("no set bits");
    }
}
