#include <stdio.h>

void inch_to_cm(void)
{
	printf("inch를 입력하세요 : ");
	
	double inch, cm;
	
	scanf("%lf", &inch);
	cm = inch * 2.54;
	
	printf("%.2lfinch == %.2lfcm\n", inch, cm);
}

void C_to_F(void)
{
	printf("섭씨를 입력하세요 : ");
	
	double C, F;
	
	scanf("%lf", &C);
	F = (C * 9.00 / 5.00) + 32;
	
	printf("%.2lfC == %.2lfF\n", C, F); 
}

/*
void Circle(void)
{
	double r;
	
	printf("반지름을 입력하세요 : ");
	
	scanf("%lf", &r);
	
	printf("%.2lf\n", r * r * 3.14159265358979);
}
*/

double Circle(double r)
{
	return r * r * 3.14159265358979;
}

int main()
{
	inch_to_cm();
	C_to_F();
	// Circle();
	
	double r;
	
	printf("반지름을 입력하세요 : ");
	
	scanf("%lf", &r);
	
	printf("%.2lf", Circle(r)); 
	
	return 0;
}
