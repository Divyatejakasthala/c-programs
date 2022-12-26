#include<stdio.h>
int cube(int a)
{
return a*a*a;
}
int main()
{
    int n,res;
    printf("enter a any number:");
    scanf("%d",&n);
    res=cube(n);
    printf("the cube of %d\n",res);

}
