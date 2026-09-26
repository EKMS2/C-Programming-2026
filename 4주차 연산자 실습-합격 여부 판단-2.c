#include<stdio.h>

int main()
{
	int score, attendance;
	
	scanf("%d %d", &score, & attendance);
	
	int passed = score >= 60 && attendance >= 80;
	
	printf("%d", passed);
	
	/*int score, attendance;
	
	scanf("%d %d", &score, &attendance); 
	
	if(score >= 60 && attendance >= 80)
	{
		printf("합격입니다.");
	}
	else
	{
		printf("불합격입니다.");
	}
	*/
}
