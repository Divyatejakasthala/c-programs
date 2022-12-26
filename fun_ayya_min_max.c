#include<stdio.h>
int sumof(int a[],int n);
int main()
{
    int a[10],n,i;
    printf("enter array number:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sumof(a,n);
}
int sumof(int a[],int n)
{
    int max,min,i;
  //  int a[10],i;
    for(i=0;i<a;i++)
    {
        min=max=a[0];
        if(min>a[i])
            min=a[i];
        if(max<a[i])
            max=a[i];
    }
    printf("min=%d\n",min);
        printf("max=%d\n",max);
}
