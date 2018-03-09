#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i;
	printf("\n enter the string");
	gets(a);
	for(i=0;i<=strlen(a);i++)
	{
	if(((a[i]>=0)&&(a[i]<=9))||((a[i]>='a')&&(a[i]<='z'))||((a[i]>='A')&&(a[i]<='Z')))
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
	}
	}

		return 0;
	}
