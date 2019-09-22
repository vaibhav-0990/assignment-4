/*program which will print all the numbers which are even but not a multiple of either 3 or 5.-vaibhav bhaskar,11912060,IT*/
#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<=100;i++)
	{
		if(((i%2)==0)&&((i%3)!=0)&&((i%5)!=0))
			printf("%d",i);
	}
}

