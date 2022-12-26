#include<stdio.h>
int sec_large(int a);
int main()
{
    int n;
    printf("enter a array number:");
    scanf("%d",&n);
    sec_large(n);
}
int sec_large(int a)
{
    int max1=0,max2=0;
    int arr[10],i;
    printf("enter array elements:\n");
    for(i=0;i<a;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<a;i++)
    {
        if(max1<arr[i])
        {
            max2=max1;
        max1=arr[i];
    }
    else if(max2<=arr[i])
    {
        max2=arr[i];
    }
    }
    printf("the second largest array element=%d\n",max2);
}

