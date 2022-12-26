#include<stdio.h>
int main()
{
    int n,cnt=0,rem;
    printf("enter a number:");
    scanf("%d",&n);
    if(n<=9)
    {
        printf("it is a single digit\n");
    }
    else
    {
        while(n)
        {
        rem=n%10;
        n=n/10;
        cnt++;
    }
    printf("%d digit number",cnt);
}
}
