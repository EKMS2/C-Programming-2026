#include<stdio.h>

int main()
{
	int year, leafyear;
	scanf("%d", &year);
	
	leafyear = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
	if(leafyear == 1) printf("윤년입니다.");
	else printf("평년입니다."); 
}
