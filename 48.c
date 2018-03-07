#include<stdio.h>
main()
{
int a[100],i,n;
printf("\n enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
a[i]=i;
printf("\n %d",i);
}
printf("\n the median number is:%d",a[(n+1)/2]);
return 0;
}
