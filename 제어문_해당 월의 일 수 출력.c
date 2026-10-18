#include <stdio.h>

int main()
{
	int month, days;
	
	printf("월(1 ~ 12)을 입력하세요 : ");
	scanf("%d", &month);
	if (month >= 1 && month <= 12)
	{
		switch (month)
		{
			case 2 :
				days = 28;
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
		printf("%d월은 %d일까지 있습니다.", month, days);
	}
	else
	{
		printf("월은 1부터 12사이의 값을 입력하세요.");
	}
}
