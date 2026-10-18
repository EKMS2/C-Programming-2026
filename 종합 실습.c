#include <stdio.h>

void exerc1(void)
{
	int n, r, abs_r, i;
	double x= 1.0;
	printf("input n, r : ");
	scanf("%d%d", &n, &r);
	
	if(n < 0) abs_r = -r;
	else abs_r = r;
	
	for(i = 0 ; i < abs_r ; i++)
	{
		x *= n;
	}
	if(r < 0) x = 1.0 / x;
	
	printf("%d의 %d승은 %lf 입니다.", n, r, x);
}
void exerc2(void)
{
	int n, result, i;
	result = 1;
	printf("input n : ");
	scanf("%d", &n);
	for(i = n ; i > 0 ; i--) result *= i;
	printf("%d factorial = %d입니다.", n, result);
}
void exerc3(void)
{
	int n, n_1, n_2, result, i;
	n_2 = 0;
	n_1 = 1;
	printf("input n : ");
	scanf("%d", &n);
	
	if (n == 0) result = n_2;
	else if (n == 1) result = n_1;
	else
	{
		for(i = 2 ; i <= n ; i++)
		{
			result = n_1 + n_2;
			n_2 = n_1;
			n_1 = result;
		}
	}
	printf("%d 번 째 숫자는 %d 입니다.", n, result);
}
void exerc4(void)
{
	int sum, score, i = 0;
	double avg;
	while(1)
	{
		printf("input score : ");
		scanf("%d", &score);
		if (score == -1) break;
		sum += score;
		i++;
		printf("run\n");
	}
	avg = sum / (double)i;
	printf("avg = %lf\n", avg);
}
void exerc5(void)
{
	char star = '*';
	int line, i, j;
	printf("input line : ");
	scanf("%d", &line);
	for(i = 0 ; i < line ; i++)
	{
		int star_count = i * 2 + 1;
		for(j = 0; j < star_count ; j++) printf("%c", star);
		printf("\n");
	}
}
void printStar(void)
{
	char star = '*';
	int line, i, j, k;
	printf("input line : ");
	scanf("%d", &line);
	int space_count = line - 1;
	for(i = 0 ; i < line ; i++)
	{
		int star_count = i * 2 + 1;
		for(j = 0 ; j < space_count - i ; j++) printf(" ");
		for(k = 0; k < star_count ; k++) printf("%c", star);
		printf("\n");
	}
}

int main()
{
	exerc1();
	exerc2();
	exerc3();
	exerc4();
	exerc5();
	printStar();
	return 0; 
}
