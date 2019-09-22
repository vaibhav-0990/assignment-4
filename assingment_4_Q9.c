/*program which will print those numbers whose last digit is multiple of 3.-vaibhav bhaskar,11912060,IT*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=100;i++)
	{
		j=i%10;
		if((j%3)==0)
		{
			printf("%d\n",i);
		}
	}
}

