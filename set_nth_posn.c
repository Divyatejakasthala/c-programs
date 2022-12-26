#include<stdio.h>
int main()
{
    int num,pos;
    printf("enter any number:");
    scanf("%d",&num);
    printf("enter a any position");
    scanf("%d",&pos);
    if((num>>pos)&1)
    {
        printf("%d is set",num);
    }
    else
        {
            printf("%d is not set",num);
        }
}

