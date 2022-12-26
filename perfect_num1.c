#include<stdio.h>
int main()
{
    int sum=0,i,j,min,max;
    printf("enter max1 number:");
    scanf("%d",&min);
    printf("enter max2 number:");
    scanf("%d",&max);
    printf("min=%d\n max=%d\n",min,max);
   for(i=min;i<=max;i++)
   {
       for(j=1,sum=0;j<i;j++)
       {
       if(i%j==0)
           sum=sum+j;
       }
    if(sum==i)
        printf("%d\n",i);
        //else
          //  printf("not perfect=%d\n",i);
    }
}
