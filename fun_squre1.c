#include<stdio.h>
int square(int a)
{
    return a*a;
}
int main()
{
    int n,res;
    printf("enter any numbre:");
    scanf("%d",&n);
    res=square(n);
    printf("the square=%d\n",res);
}
