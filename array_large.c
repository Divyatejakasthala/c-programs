#include<stdio.h>
int main()
{
    int arr[10],n,i,large=0;
    printf("enter array number:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(large<arr[i])
        large=arr[i];
    }
   // for(i=0;i<n;i++)
    {
    printf("the largest array element=%d\n",large);
}
}
