#include<stdio.h>
main()
{
int a,b;
printf("\n enter the value of a:");
scanf("%d",&a);
printf("\n enter the value of b:");
scanf("%d",&b);
printf("\n value before swapping");
printf("\n the value of a is %d and value of b is %d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("\n value after swapping");
printf("\n the value of a is %d and value of b is %d",a,b);
return 0;
}

