#include<stdio.h>
int main()
{
    int val;
    printf("enter a val:");
    scanf("%d",&val);
    printf("the extract value of 5 and 7byte=%d\n",((val >> 5) & 01), ((val >> 7) & 01)); // extracting bit positions 5 and 7
    return 0;
}

