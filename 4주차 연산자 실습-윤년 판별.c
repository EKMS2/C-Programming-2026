#include<stdio.h>

void leap_year(void)
{
	int n;
	scanf("%d" ,&n);
	
	if(n % 100 == 0)
	{
		if(n % 400 == 0)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	else
	{
		if(n % 4 == 0)
		{
			printf("1");
		}
		else
		{
			printf("0"); 
		}
	}
}

int main()
{
	leap_year();
}
