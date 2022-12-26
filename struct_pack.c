#include <stdio.h>
#pragma pack(4)
int main()
{
    struct sample
    {
        int a;
        char b;
        int c;
    };
    struct sample s1;
    printf("%d",sizeof(s1));
    printf("Hello World");

    return 0;
}

