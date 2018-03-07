#include<stdio.h>
main()
{
int a;
printf("\n enter the value of a");
scanf("%d",&a);
if((a>=1)&&(a<=10))
{
	printf("\n the value is in the range of 1 to 10 %d",a);
}
	else
	{
		printf("\n the value is not in the range of 1 to 10:%d",a);
	}
return 0;
}
