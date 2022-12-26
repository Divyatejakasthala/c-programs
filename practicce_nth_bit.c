#include<stdio.h>
int main()
{
    int num,pos;
    printf("enter any number:");
    scanf("%d",&num);
    printf("enter any pos:");
    scanf("%d",&pos);
    if((num>>pos)&1)
    {
        printf("%d %d is set",num,pos);
    }
    else
    {
        printf("%d is %d pos is not set",num,pos);
    }
}
