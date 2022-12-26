#include<stdio.h>
int main()
{
int val,i,cnt=0;
printf("enter any decimal number:");
    scanf("%d",&val);
   while(val)
   {
       if((val&1)==1)
       cnt++;
       val=val>>1;
   }
    printf("%d",cnt);
}



