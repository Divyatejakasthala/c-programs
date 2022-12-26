#include<stdio.h>
int main()
{
    int arr[10],large=0,i,n;
    printf("enter array number:");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(large<arr[i])
            large=arr[i];
    }
    printf("the largest element=%d\n",large);
}
