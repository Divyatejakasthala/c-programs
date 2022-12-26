#include<stdio.h>
int main()
{
    unsigned char data=195;
    printf("%u\n",(((data&0xF0)>>2)&0x0f));
}
