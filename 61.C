#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i,b;
	printf("\n enter the string:");
	gets(a);
	printf("\n enter the number:");
	scanf("%d",&b);
	for(i=0;i<b;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
