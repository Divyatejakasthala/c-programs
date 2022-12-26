#include <stdio.h>
int main()
{
    int num;
    printf("enter any number:");
    scanf("%d",&num);
    if(num&1==1)
    {
        printf("%d is set",num);
    }
    else
    {
        printf("%d is not set",num);
    }
}
