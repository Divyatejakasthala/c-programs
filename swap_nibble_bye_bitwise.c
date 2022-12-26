#include<stdio.h>
int main()
{
    unsigned char data=100;
    data=((data&0x0F)<<4)|((data&0xF0)>>4);
    printf("%u\n",data);

}
