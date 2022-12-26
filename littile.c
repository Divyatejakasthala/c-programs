#include<stdio.h>
int main()
{
    int x=0x12344556;
    char *ptr;
    ptr=&x;
    if(*ptr==0x12)
    {
        printf("big endian\n");
    }
    else
    {
        printf("littile endian\n");
    }
}
