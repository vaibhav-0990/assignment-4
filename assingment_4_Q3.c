/*program which will print all even numbers less than 50 and odd numbers more than 50-vaibhav bhaskar,11912060,It*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<50;i++)
	{
		if((i%2)==0)
		{
			printf("%d\n",i);
		}
	}

	for(j=50;j<100;j++)
	{
		if((j%2)==1)
		{
			printf("%d\n",j);
		}
	}
}

