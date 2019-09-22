/*program which will print all numbers ,which are either a multiple of 3 or 5 but not both-vaibhav bhaskar,11912060,IT*/
#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<=80;i++)
	{
		if((((i%3)==0)||((i%5)==0))&&((i%15)!=0))
		{
			printf("%d\n",i);
		}
	}
}

