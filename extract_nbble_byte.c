#include<stdio.h>
int main()
{
    unsigned char data=100;
    data=((data&0x0F));
    printf("%x\n",data);
}
