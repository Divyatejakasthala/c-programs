#include<stdio.h>
int main()
{
    int arr[10],i,max1=0,max2=0,n;
    printf("enter array number:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<5;i++)
    {
        if(arr[i]>max1)
        {
        max2=max1;
        max1=arr[i];
    }
else if(max2<=arr[i])
{
        max2=arr[i];
}
    }
    printf("the second largest=%d\n",max2);

}

