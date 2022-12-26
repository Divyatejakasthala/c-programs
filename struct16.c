#include<stdio.h>
union job
{
    int id;
    char name[20];
    float sal;
}a;
struct jobs
{
    int id;
    char name[20];
    float sal;
}b;
int main()
{
    printf("size of union=%d\n",sizeof(a));
    printf("size of struct=%d\n",sizeof(b));
}

