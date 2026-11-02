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
		if (i % 10 == 0) printf("\n");
		printf("%d¹ø ÇÐ»ý Á¡¼ö : %d\n", i + 1, number[i]);
	}
	avg = sum / 10.0;
	printf("ÃÖ´ñ°ª : %d, ÃÖ¼Ú°ª : %d, Æò±Õ : %lf", MAX, MIN, avg);
	return 0;
}
