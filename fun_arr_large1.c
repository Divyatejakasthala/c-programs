#include<stdio.h>
int larg(int a)
{
    int arr[10],i,large=0;
    printf("enter array elements:\n");
    for(i=0;i<a;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<a;i++)
    {
        if(large<arr[i])
            large=arr[i];
    }
    printf("the largest array elements=%d\n",large);
}
int main()
{
    int n,res;
    printf("enter array number:");
    scanf("%d",&n);
    res=larg(n);
}
