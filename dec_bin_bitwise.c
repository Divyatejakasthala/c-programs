#include<stdio.h>
int dec(int a);
int main()
{
    int val,i=1;
    printf("enter any decimal number:");
    scanf("%d",&val);
    for(i=sizeof(int)*8-1;i>=0;i--)
    {
        if((val>>i)&1)
        {
            printf("1");
        }
            else
            {
                printf("0");
            }

        }
    }

