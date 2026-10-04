#include <stdio.h>

void exer1(void)
{
	int player1, player2;
	
	/* 가위 : 1
	   바위 : 2
	   보  :  3
	*/ 
	
	printf("input player1 : ");
	scanf("%d", &player1);
	printf("input player2 : ");
	scanf("%d", &player2);
	
	if(player1 == player2) printf("tie");
	else if(player1 == 1)
	{
		if(player2 == 2) printf("p2 wins");
		else printf("p1 wins");
	}
	else if(player1 == 2)
	{
		if(player2 == 3) printf("p2 wins");
		else printf("p1 wins");
	}
	else
	{
		if(player2 == 1) printf("p2 wins");
		else printf("p1 wins");
	}
}

int main()
{
	exer1();
	
	return 0;
}
