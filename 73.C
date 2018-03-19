#include<stdio.h>
main()
{
int a,b,c;
printf("\n enter the value(mid value) of a:");
scanf("%d",&a);
printf("\n enter the value(initial value) of b:");
scanf("%d",&b);
printf("\n enter the value(final value) of c:");
scanf("%d",&c);
if((a>=b)&&(a<=c))
{
printf("\n yes");
}
else
{
printf("\n no");
}
return 0;
}
