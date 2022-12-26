#include<stdio.h>
int main()
{
    int num,pos;
    printf("enter any number:\n");
    scanf("%d",&num);
    printf("enter any position:\n");
    scanf("%d",&pos);
    if((num>>pos)&1)
    {
        printf("%d is set",pos);
    }
    else
    {
        printf("%d is set",pos);
    }
}
