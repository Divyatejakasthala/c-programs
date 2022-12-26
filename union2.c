#include <stdio.h>
union un
{
    int a;
    char b;
    float c;
};
int main()
{
    union un e;
    printf("the size of union=%d\n",sizeof(e));
   printf("the size of union data type =%d\n",sizeof(union un));
    e.a=10;
    e.b='A';
    e.c=80.33;
    printf("the student details are:\n");
    printf("a=%d\n",e.a);
    printf("b=%c\n",e.b);
    printf("c=%f\n",e.c);
}

