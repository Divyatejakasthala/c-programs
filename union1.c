
#include <stdio.h>
union max
{
    int a;
    int b;
    int c;
};
int main()
{
    union max e;
    printf("the size of union=%d\n",sizeof(e));
   printf("the size of union data type =%d\n",sizeof(union max));
    e.a=10;
    e.b=20;
    e.c=30;
    printf("the student details are:");
    printf("a=%d\n",e.a);
    printf("b=%d\n",e.b);
    printf("c=%d\n",e.c);
}
