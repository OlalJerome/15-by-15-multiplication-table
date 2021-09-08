#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter an integer:");
	scanf("%d", &n);
	for(i=15;i<=100;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
	return 0;		
}
