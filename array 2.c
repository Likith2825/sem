#include<stdio.h>
main()
{
	int a[10][10],i,j,m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	printf("Enter elements for matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
