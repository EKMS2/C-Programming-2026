#include <stdio.h>

int main()
{
	int year, leafyear, month, days;
	
	printf("년도와 월(1 ~ 12)을 입력하세요 : ");
	scanf("%d %d", &year, &month);
	leafyear = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
	
	if (month >= 1 && month <= 12)
	{
		switch (month)
		{
			case 2 :
				if (leafyear == 1)
				{
					days = 29;
				}
				else
				{
					days = 28;
				}
				break;
			case 4 :
			case 6 :
			case 9 :
			case 11 :
				days = 30;
				break;
			default :
				days = 31;
				break;
		}
		printf("%d년 %d월은 %d일까지 있습니다.", year, month, days);
	}
	else
	{
		printf("월은 1부터 12사이의 값을 입력하세요.");
	}
}
