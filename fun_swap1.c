#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n1,n2;
    printf("enter n1 and n2 values:");
    scanf("%d%d",&n1,&n2);
    printf("before swapping n1=%d,n2=%d\n",n1,n2);
    swap(&n1,&n2);
    printf("after swapping n1=%d,n2=%d\n",n1,n2);
}
