#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,cnt=0;
    printf("enter a number:");
    gets(str);
    for(i=0;str[i];i++)
    {
    if((str[i]<57) && (str[i]>48))
        {
            cnt++;
        }

}
}
