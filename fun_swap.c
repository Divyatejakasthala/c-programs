#include<stdio.h>
int swap(int *a,int *b);
int main()
{
    int n1,n2,temp,res;
    printf("enter a n1 and n2 values:");
    scanf("%d%d",&n1,&n2);
    printf("before swaping n1=%d,n2=%d\n",n1,n2);
    swap(&n1,&n2);
    printf("after swaping n1=%d\n,n2=%d\n",n1,n2);
}
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
