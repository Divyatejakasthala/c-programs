#include<stdio.h>
int main()
{
    int data,pos,poss;
    printf("enter  any data:\n");
    scanf("%d",&data);
    printf("enter a pos:\n");
    scanf("%d",&pos);
    printf("enter another pos:\n");
    scanf("%d",&poss);
    if(((data>>pos)&1)!=((data>>poss)&1))
{
    data=data^(1<<pos);
    data=data^(1<<poss);
    printf("after swapping:\n");
    printf("%d",data);
}
}
