#include <stdio.h>

void time()
{
	int total, hours, minutes, seconds;
	
	printf("전체 시간을 입력하세요(단위 : 초) : ");
	
	scanf("%d", &total);
	hours = total / 3600;
	minutes = total % 3600 / 60;
	seconds = total % 3600 % 60;
	
	printf("%d시간 %d분 %d초", hours, minutes, seconds);
}

int main()
{
	time();
}
