#include <stdio.h>
main()
{
	int a,b,c;
	printf("\n enter the value of a,b:");
	scanf("%d%d",&a,&b);
	c=a*b;
	printf("\n the product value is %d",c);
	if(c%2==0)
	{
		printf("\n the number is even %d",c);
	}
	else
	{
		printf("\n the number is odd %d",c);
	}
	return 0;
}
