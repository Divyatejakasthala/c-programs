#include<stdio.h>
int main()
{
    int arr[10],n,i,max1=0,max2=0;
    printf("enter array number:");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(max1<arr[i])
        {
            max2=max1;
        max1=arr[i];
    }
    else if(max2>=arr[i])
        max2=arr[i];
}
printf("the second largest element=%d\n",max2);
}
