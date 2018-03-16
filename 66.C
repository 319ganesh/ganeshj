#include<stdio.h>
main()
{
	int a;
	printf("\n enter the value a:");
	scanf("%d",&a);
	if((a%2==0)||(a%3==0))
	{
		printf("\n the number is not a prime number:%d",a);
	}
	else
	{
		printf("\n the number is a prime number:%d",a);
	}
	return 0;
}
