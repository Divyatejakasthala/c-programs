#include<stdio.h>
int digit(int a);
int main()
{
    int max,min,res;
    printf("enter a min and max value:");
    scanf("%d%d",&min,&max);
    res=digit(min,max);
}
int digit(int a)
{
    int i,j,min,max,sum=0;
    for(i=min;i<=max;i++)
    {
        for(j=1,sum=0;j<i;j++)
        {
            if(i%j==0)
                sum=sum+j;
        }
        if(sum==i)
            printf("%d\n",i);

    }
}
