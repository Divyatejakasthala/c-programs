#include <stdio.h>

int main()
{
    int a,b,c,i=0;
    printf("enter a b c values:");
    scanf("%d%d%d",&a,&b,&c);
    while(a!=0 && b!=0 && c!=0)
    {
        a--;
        b--;
        c--;
        i++;
    }
    printf("%d\n",i);
}
