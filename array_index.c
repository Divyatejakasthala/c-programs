#include<stdio.h>
int main()
{
    int arr[100],i,num,val,cnt=0;
    printf("enter array number:\n");
    scanf("%d",&num);
    printf("enter array elements:\n");
    for(i=0;i<num;i++)
        scanf("%d",&arr[i]);
    printf("enter the value:");
    scanf("%d",&val);
    for(i=0;i<num;i++)
    {
        if(val==arr[i])
        {

       // printf("number '%d' found at position of array %d\n",val,i);
       printf("the array number of %d index is %d\n",val,i);
        }
    }
