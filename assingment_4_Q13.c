/*program which will print those numbers whose first digit leaves remainder 1 when divided by 3 .-vaibhav bhaskar,11912060,IT*/
#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<=80;i++)
	{
		if((i/10)%3==1)
		{
			printf("%d\n",i);
		}
	}
}

