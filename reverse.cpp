#include<stdio.h>
int main()
{
	int rev,n,rem;
	printf("Enter the number:");
	scanf("%d",&n);
	
	while (n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	printf("The reverse is %d",rev);
	
	return 0;
	
}
