#include<stdio.h>
main()
{
	int n,i,sum,a=0,b=1;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=a+b;
		printf("\n %d",sum);
		
		a=b;
		b=sum;
	}
	return 0;
}
