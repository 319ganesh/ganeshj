#include<stdio.h>
main()
{
int a,b,c;
printf("\n enter the value of a:");
scanf("%d",&a);
printf("\n enter the value of b:");
scanf("%d",&b);
printf("\n value before swapping");
printf("\n the value of a is %d and value of b is %d",a,b);
c=a;
a=b;
b=c;
printf("\n value after swapping");
printf("\n the value of a is %d and value of b is %d",a,b);
return 0;
}

