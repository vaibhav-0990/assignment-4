/*program which will print all odd numbers between 0 and 9,20 and  29,40 and 49,...,80 and 89 and all even numbers between 10 and 19,30 and 39,.....,90 and 99.-vaibhav bhaskar,11912060,IT*/
#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<100;i++)
	{
		if((i/10)%2==0)
		{
			if((i%2)==1)
			{
				printf("%d\n",i);
			}
		}
		if((i/10)%2==1)
		{
			if((i%2)==0)
			{
				printf("%d\n",i);
			}
		}
	}
}

