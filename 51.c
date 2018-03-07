#include<stdio.h>
main()
{
	int a[100],i,n;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	printf("\n enter the value:");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		printf("\t %d",a[i]);
	}
	return 0;
}
