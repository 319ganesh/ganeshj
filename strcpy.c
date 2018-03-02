#include<stdio.h>
#include<string.h>
main()
{
int n,i;
char a[100];
printf("\n enter the sentence");
gets(a);
printf("\n enter the value of n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n %s",a);
}
return 0;
}
