#include<stdio.h>
main()
{
int n,b=0,c=1,d,i;
printf("\n enter the value of n:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("\t %d",b);
d=b+c;
b=c;
c=d;
}
return 0;
}
