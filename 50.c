#include<stdio.h>
#include<math.h>
main()
{
int a,b;
printf("\n enter the value of a");
scanf("%d",&a);
b=a/2;
if(a==pow(2,b))
{
printf("\n the value given is a power of 2",a);
}
else
{
printf("\n the value given is not a power of 2:%d",a);
}
return 0;
}
