#include<stdio.h>
main()
{
int a[10],i,n,c;
printf("\n enter the value of n");
scanf("%d",&n);
printf("\n enter the value:");
for(i=0;i<=n;i++)
	{
          scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		if(a[i]>a[i+1])
		{
		c=a[i];
		a[i]=a[i+1];
		a[i+1]=c;
		}
	}
	printf("\n the higest value is:%d",a[i]);
	return 0;
}
