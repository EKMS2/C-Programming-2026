#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
	int number[SIZE], MAX = 0, MIN = 101, sum = 0, i;
	double avg;
	srand(time(NULL));
	for (i = 0; i < SIZE; i++) number[i] = rand() % 101;
	for (i = 0; i < SIZE; i++)
	{	
		sum += number[i];
		if (number[i] > MAX) MAX = number[i];
		if (number[i] < MIN) MIN = number[i];
		printf("%d번 학생 점수 : %d\n", i + 1, number[i]);
	}
	avg = (double)sum / SIZE;
	printf("최댓값 : %d, 최솟값 : %d, 평균 : %lf", MAX, MIN, avg);
	return 0;
}
