#include<stdio.h>
#include<string.h>
main()
{
int a,b;
char c[100],d[100];
printf("\n enter the string");
gets(c);
printf("\n enter the second string:");
gets(d);
a=strlen(c);
b=strlen(d);
if(a>b)
{
printf("\n %s is greater",c);
}
else if(a<b)
{
printf("\n %s is greater",d);
}
else
{
printf("\n both are equal so we can print any value :%s",c);
}
return 0;
}
