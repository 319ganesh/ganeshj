#include <stdio.h>
main()
{
	int a;
	printf("\n enter the value of a:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("\n the number is even%d",a);
	}
	else
	{
		printf("\n the number is even%d",(a-1));
	}
	return 0;
}

