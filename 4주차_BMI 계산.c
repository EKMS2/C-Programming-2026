#include <stdio.h>

int main()
{
	double heightM, weightKg, BMI;
	
	printf("키와 몸무게를 입력하세요(키를 먼저 입력하세요) : ");
	
	scanf("%lf %lf", &heightM, &weightKg);
	
	BMI = weightKg / (heightM * heightM);
	
	printf("BMI = %.2lf", BMI);
}
