#include<stdio.h>
int main()
{
    int x;
    char *ptr;
    ptr=&x;
    printf("enter hexa decimal value:");
    scanf("%x",&x);
    if(*ptr == (x & 0xff))
        printf("little endian");
    else
        printf("big endian");
}
