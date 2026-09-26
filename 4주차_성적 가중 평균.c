#include <stdio.h>

int main()
{
	double midterm, final, assignment, weighted_score;
	
	printf("중간고사 점수, 기말고사 점수, 과제 점수를 입력해주세요(중간-기말-과제 순서로 입력하세요) : ");
	
	scanf("%lf %lf %lf", &midterm, &final, &assignment);
	
	midterm = midterm / 10 * 3;
	final = final / 10 * 4;
	assignment = assignment / 10 * 3;
	weighted_score = midterm + final + assignment;
	
	printf("weighted_score = %.2lf", weighted_score);
}
