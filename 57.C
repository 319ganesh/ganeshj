#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n enter the value of a:");
	scanf("%d",&a);
	printf("\n enter the value of b:");
	scanf("%d",&b);
	printf("\n value before swapping is a %d and b %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\n the value after swapping is a %d and b %d",a,b);
	return 0;
}
