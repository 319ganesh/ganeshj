#include<stdio.h>
main()
{
	int a,b;
	printf("\n enter the value of a:");
	scanf("%d",&a);
	printf("\n enter the value of b:");
	scanf("%d",&b);
	printf("\n the value of a is %d and b is %d before swapping",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\n the value of a is %d and b is %d after swapping",a,b);
	return 0;
}
