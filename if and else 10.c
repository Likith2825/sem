#include<stdio.h>
main()
{
	int n,i,a,b,p,s,T;
	scanf("%d",&n);
	if(n>0)
	{
		a=n%10;
		b=n/10;
		s=a+b;
		p=a*b;
		printf("%d%d",s,p);
		T=s+p;
		
		if(T==n)
		{
			printf("\nSpecial number");
		}
		else
		{
			printf("Not");
		}
	}
}
