#include<stdio.h>
struct shopping
{
    int code;
    char name[20];
    float bill;
};
int main()
{
struct shopping e[3];
int i;
for(i=1;i<3;i++)
{
printf("enter a code:\n");
scanf("%d",&e[i].code);
printf("enter customer name:\n");
scanf("%s",e[i].name);
printf("enter a bill:\n");
scanf("%f",&e[i].bill);
}
printf("the shopping details are:\n");
for(i=1;i<3;i++)
{
printf("code=%d\n",e[i].code);
printf("name=%s\n",e[i].name);
printf("bill=%f\n",e[i].bill);
if(e[i].bill<=4000)
{
    printf("no rewards\n");
}
else if(e[i].bill>8000 && e[i].bill<=10000)
{
    printf("win prize\n");
}
else if(e[i].bill>=10001 && e[i].bill<=15000)
{
    printf("win 1 item free\n");
}
else if(e[i].bill>=16000)
{
    printf("win 1 gold coin\n");
}
}
}
