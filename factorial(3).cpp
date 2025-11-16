#include<stdio.h>
int main()
{
	int n;
	long long int fact;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	if(n<0)
	{
		printf("The number is negative!!");
	}
	
	else
	{
		for(int i=1;i<=n;i++)
		{
			fact*=i;
		}
	printf("The fatorial of %d is %lld",n,fact);
	}
	return 0;

}
