#include<stdio.h>
main()
{
	int a,b,sum=0;
	printf("\n enter the value of a:");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;
	}
	printf("\n the sum of the digit is:%d",sum);
	return 0;
}
