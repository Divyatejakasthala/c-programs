#include<stdio.h>
 main()
{
    unsigned char data=100;
    printf("%x%x\n",((data>>5)&1),((data>>6)&1));
}
