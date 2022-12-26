#include<stdio.h>
float add(int a,int b);
int main()
{
    float n1,n2,res;
    printf("enter n1 and values:");
    scanf("%f%f",&n1,&n2);
    res=add(n1,n2);
    printf("the sum of n1 and n2=%.2f\n",res);
}
float add(int a,int b)
{

int c;
c=a+b;
return c;
}
