#include<stdio.h>

void leap_year(void)
{
	int year;
	scanf("%d" ,&year);
	
	if(year % 100 == 0)
	{
		if(year % 400 == 0)
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
		if(year % 4 == 0)
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
