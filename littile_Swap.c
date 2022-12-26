#include<stdio.h>
int main()
{
    int temp;
    int x=0x12345678;
    int x;
    char *ptr=&x;
    char *ptr2;
   // printf("enter a x value:");
    //scanf("%x",&x);
    ptr2=ptr+3;
    while(ptr<ptr2)
    {
        temp=*ptr;
        *ptr=*ptr2;
        *ptr2=temp;
        ptr++;
        ptr2--;
    }
    printf("%x",x);
}
