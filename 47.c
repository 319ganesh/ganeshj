#include<stdio.h>
main()
{
int a[100],i,n,max;
printf("\n enter the value of n:");
scanf("%d",&n);
printf("\n enter the value of a:");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
if(a[i]>a[i+1])
{
max=a[i];
a[i]=a[i+1];
a[i+1]=max;
}
}
printf("\n greater and smaller is:%d %d",a[n],a[1]);

return 0;
}
