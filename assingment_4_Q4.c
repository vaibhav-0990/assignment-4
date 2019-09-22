/*program which will print all even numbers between 20 and 40 and all odd numbers between 50 and 80-vaibhav bhaskar,11912060,It*/
#include<stdio.h>
int main()
{
	int i,j;
	for(i=20;i<=40;i++)
	{
		if((i%2)==0)
		{
			printf("%d\n",i);
		}
	}

	for(j=50;j<80;j++)
	{
		if((j%2)==1)
		{
			printf("%d\n",j);
		}
	}
}

