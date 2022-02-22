#include<stdio.h>
main()
{
	int a[10],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nPrint the arrays in correct order");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\nPrint the elements in reverse order");
	for(i=n-1;i>=0;i--)
	{
		printf("\n%d",a[i]);
	}
}
