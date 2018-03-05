#include<stdio.h>
main()
{
int a,b=0;
printf("\n enter the value of a:");
scanf("%d",&a);
while(a!=0)
{
a=a/10;
b++;
}
printf("\n the number of numerics in the given data is:%d",b);
return 0;
}
