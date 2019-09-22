/*program which will print those numbers whose last digit is between 5 and 8.-vaibhav bhaskar,11912060,It*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=80;i++)
	{
		j=(i%10);
		if((j>=5)&&(j<=8))
		{
			printf("%d\n",i);
		}
	}
}

