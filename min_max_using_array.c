#include<stdio.h>
int main()
{
    int arr[10],n,i,max=0,min=0;
    printf("enter array number:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        min=max=arr[0];
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            arr[i]=min;
    }
    else if(max<arr[i])
    {
        max=arr[i];
    }
    }
    printf("min=%d\n,max=%d\n",min,max);
}
