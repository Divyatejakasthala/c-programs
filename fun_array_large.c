#include<stdio.h>
int larg(int a);
    int main()
    {
        int arr[10],n,large=0;
        printf("enter aray number:");
        scanf("%d",&n);
        larg(n);
    }
    int larg(int a)
    {
        int i,large=0;
        int arr[10];
         printf("enter array elements:");
        for(i=0;i<a;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<a;i++)
        {
            if(large<arr[i])
                large=arr[i];
        }
        printf("the array largest element=%d\n",large);
    }

