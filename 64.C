#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n enter the value of a:");
	scanf("%d",&a);
	printf("\n enter the value of b:");
	scanf("%d",&b);
	c=a+b;
	if(c%2==0)
	{
		printf("\n the number is even:%d",c);
	}
	else
	{
		printf("\n the number is odd:%d",c);
	}
	return 0;
}
