#include<stdio.h>
#include<string.h>
main()
{
int i;
char c[100],b;
printf("\n enter the string:");
gets(c);
for(i=0;i<=strlen(c);i++)
{
b=c[i];
if(b==" ")
{
}
else
{
printf("%c",b);
}
}
return 0;
}
