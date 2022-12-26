#include<stdio.h>
int swap(int *a,int *b);
int main()
{
    int a,b,res;
    printf("enter x and y values:\n");
    scanf("%d%d",&a,&b);
    res=swap(&a,&b);
    printf("a=%d b=%d\n",a,b);
}
int swap(int *a,int *b)
{
    *a=*a ^ *b;
    *b=*a ^ *b;
    *a=*a ^ *b;
}
