#include<stdio.h>
#include<string.h>
main()
{
char s[100];
int i,b=0,c;
printf("\n enter the sentence:");
gets(s);
for(i=0;i<=strlen(s);i++)
{
if(((s[i]>='0')&&(s[i]<='9'))||((s[i]>='a')&&(s[i]<='z'))||((s[i]>='A')&&(s[i]<='Z'))||((s[i]==' ')))
{
b++;
}
}
c=strlen(s)-b;
printf("\n the value is:%d",c);
return 0;
}
