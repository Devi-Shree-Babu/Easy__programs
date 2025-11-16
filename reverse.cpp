#include<stdio.h>
int main()
{
	int rev,n,rem;
	printf("Enter the number:");
	
	
	if (scanf("%d",&n)!=1)
	{
		printf("Invalid input!");
	}
	else
	{
		if (n<0)
		{
			printf("The number has negative sign!");
		}
		else
		{
			while (n!=0)
			{
				rem=n%10;
				rev=rev*10+rem;
				n/=10;
			}
		printf("The reverse is %d",rev);	
		}
	}
	
	
	
	return 0;
	
}

