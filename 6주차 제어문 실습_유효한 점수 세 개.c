#include <stdio.h>

void exec1()
{
	int a, i, cnt = 0;
	double sum = 0;
	for(i = 0 ; i < 3 ; i++)
	{
		scanf("%d", &a);
		if(a == -1)
		{
			break;
		}
		else if(a >= 0 && a <= 100)
		{
			sum += a;
			cnt++;
		}
		else
		{
			printf("범위를 벗어났습니다. 0 ~ 100 사이의 수를 입력해주세요.\n");
			i = cnt - 1;
		}
	}
	if(cnt == 0)
	{
		printf("입력된 점수가 없습니다.");
	}
	else
	{
		printf("개수 : %d 평균 : %.2lf", cnt, sum / cnt);
	}
	
}

int main()
{
	exec1();
	return 0;
}
