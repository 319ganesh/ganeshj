#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n enter the value a:");
	scanf("%d",&a);
	c=a%10;
	b=a-c;
	printf("\n the  greatest multiple of 10 for the given number is :%d",b+10);
	return 0;
}
