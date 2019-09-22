/*program which will print all the numbers between 10 and 19,30 and 39,50 and 59......90 and 99.-vaibhav bhaskar,11912060,IT*/
#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<=100;i++)
	{
		if((i/10)%2==1)
		{
			printf("%d\n",i);
		}
	}
}

	
