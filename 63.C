#include <stdio.h>
main()
{
	char a[100];
	int m,i,b=0;
	printf("\n enter the string:");
	gets(a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
	if(a[i]==' ')
	{
	b++;	
	}
	}
	printf("\n number of words:%d",b+1);
	return 0;
	
}
