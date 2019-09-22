/* program which prints all the numbers which are either multiple of 3 or 7.-vaibhav bhaskar,11912060,IT*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i;
	for(i=0;i<=100;i++)
	{
		if((i%3)==0)
			printf("%d\n",i);
	        if((i%7)==0)
			printf("%d\n",i);

	}
}

