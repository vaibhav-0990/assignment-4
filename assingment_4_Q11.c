/*program which will print those numbers whose sum of both digits is multipl os 7.-vaibav bhaskar,11912060,IT*/
#include<stdio.h>
int main()
{
	int i,j,l;
	for(i=0;i<=80;i++)
	{
		j=(i%10);
		l=(i/10);
		if((j+l)%7==0)
		{
			printf("%d\n",i);
		}
	}
}


