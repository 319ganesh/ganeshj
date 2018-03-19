#include<stdio.h>
#include<string.h>
main()
{
	char b[100];
	int i;
	printf("\n enter the string:");
	gets(b);
	for(i=0;i<=strlen(b);i++)
	{
	if((b[i]=='a')||(b[i]=='e')||(b[i]=='i')||(b[i]=='o')||(b[i]=='u')||(b[i]=='A')||(b[i]=='E')||(b[i]=='I')||(b[i]=='O')||(b[i]=='U'))
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
