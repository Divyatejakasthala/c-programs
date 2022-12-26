#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void* getstring(void)
{
 char* ptr=NULL;
 int i=0;
 do
    {
 ptr=realloc(ptr,i+1);
 ptr[i]=getchar();
 }
 while(ptr[i++]!='\n');
 ptr[i-1]='\0';
 return ptr;
}
int main()
{
 int cnt=0,i=0;
 printf("enter str:\n");
 char* ptr=getstring();
if(ptr[0]=='-'||ptr[0]=='+')
 {
 cnt--;
 }
 while(ptr[i])
 {
//if(ptr[i]=='.')
//cnt--;
  cnt++;
  i++;

 }
 printf("%d",cnt);
}


