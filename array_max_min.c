#include<stdio.h>
int main()
{
    int arr[10],n,min,max,i,j;
    printf("enter array number:");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    min=max=arr[0];
    for(i=0;i<n;i++)
    {
            if(min>arr[i])
                min=arr[i];
                if(max<arr[i])
            max=arr[i];
        }
    printf("the min=%d\n,max=%d\n",min,max);
}
