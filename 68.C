#include<stdio.h>
main()
{
	int a,c;
	printf("\n enter the value a:");
	scanf("%d",&a);
	if(a%7==0)
	{
		printf("\n the number is a multiply of 7 and it is divisible by 7:%d",a);
	}
	else
	{
		printf("\n the number is not a multiply of 7 and it is divisible by 7:%d",a);	
	}
	return 0;
}
