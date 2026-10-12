#include <stdio.h>

int n, cnt = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0, cnt6 = 0, cnt7 = 0, cnt8 = 0, cnt9 = 0;

void exec1()
{
	while(1)
	{
		scanf("%d", &n);
		cnt++;
		if(n == 1)
		{
			cnt1++;
			cnt2 = 0;
			cnt3 = 0;
			cnt4 = 0;
			cnt5 = 0;
			cnt6 = 0;
			cnt7 = 0;
			cnt8 = 0;
			cnt9 = 0;
			if(cnt1 == 3)
			{
				printf("숫자 1 (이/가) 3번 연속 -> 전체 %d회",cnt);
				break;
			}
		}
		else if(n == 2)
		{
			cnt2++;
			cnt1 = 0;
			cnt3 = 0;
			cnt4 = 0;
			cnt5 = 0;
			cnt6 = 0;
			cnt7 = 0;
			cnt8 = 0;
			cnt9 = 0;
			if(cnt2 == 3)
			{
				printf("숫자 2 (이/가) 3번 연속 -> 전체 %d회",cnt);
				break;
			}
		}
		else if(n == 3)
		{
			cnt3++;
			cnt2 = 0;
			cnt1 = 0;
			cnt4 = 0;
			cnt5 = 0;
			cnt6 = 0;
			cnt7 = 0;
			cnt8 = 0;
			cnt9 = 0;
			if(cnt3 == 3)
			{
				printf("숫자 3 (이/가) 3번 연속 -> 전체 %d회",cnt);
				break;
			}
		}
		else if(n == 4)
		{
			cnt4++;
			cnt2 = 0;
			cnt3 = 0;
			cnt1 = 0;
			cnt5 = 0;
			cnt6 = 0;
			cnt7 = 0;
			cnt8 = 0;
			cnt9 = 0;
			if(cnt4 == 3)
			{
				printf("숫자 4 (이/가) 3번 연속 -> 전체 %d회",cnt);
				break;
			}
		}
		else if(n == 5)
		{
			cnt5++;
			cnt2 = 0;
			cnt3 = 0;
			cnt4 = 0;
			cnt1 = 0;
			cnt6 = 0;
			cnt7 = 0;
			cnt8 = 0;
			cnt9 = 0;
			if(cnt5 == 3)
			{
				printf("숫자 5 (이/가) 3번 연속 -> 전체 %d회",cnt);\
				break;
			}
		}
		else if(n == 6)
		{
			cnt6++;
			cnt2 = 0;
			cnt3 = 0;
			cnt4 = 0;
			cnt5 = 0;
			cnt1 = 0;
			cnt7 = 0;
			cnt8 = 0;
			cnt9 = 0;
			if(cnt6 == 3)
			{
				printf("숫자 6 (이/가) 3번 연속 -> 전체 %d회",cnt);
				break;
			}
		}
		else if(n == 7)
		{
			cnt1++;
			cnt2 = 0;
			cnt3 = 0;
			cnt4 = 0;
			cnt5 = 0;
			cnt6 = 0;
			cnt1 = 0;
			cnt8 = 0;
			cnt9 = 0;
			if(cnt7 == 3)
			{
				printf("숫자 7 (이/가) 3번 연속 -> 전체 %d회",cnt);
				break;
			}
		}
		else if(n == 8)
		{
			cnt8++;
			cnt2 = 0;
			cnt3 = 0;
			cnt4 = 0;
			cnt5 = 0;
			cnt6 = 0;
			cnt7 = 0;
			cnt1 = 0;
			cnt9 = 0;
			if(cnt8 == 3)
			{
				printf("숫자 8 (이/가) 3번 연속 -> 전체 %d회",cnt);
				break;
			}
		}
		else
		{
			cnt9++;
			cnt2 = 0;
			cnt3 = 0;
			cnt4 = 0;
			cnt5 = 0;
			cnt6 = 0;
			cnt7 = 0;
			cnt8 = 0;
			cnt1 = 0;
			if(cnt9 == 3)
			{
				printf("숫자 9 (이/가) 3번 연속 -> 전체 %d회",cnt);
				break;
			}
		}
		
	}
}

int main()
{
	exec1();
	return 0;
}
