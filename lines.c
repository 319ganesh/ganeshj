#include<stdio.h>
#include<string.h>
main()
{
char s[100];
int i,b=0;
printf("\n enter the sentence:");
gets(s);
for(i=0;i<=strlen(s);i++)
{
if(s[i]=='.')
b++;
}
printf("\n the value is:%d",b);
return 0;
}
