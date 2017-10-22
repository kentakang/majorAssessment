#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i, cnt = 0, n, temp, comNum;
	printf("베스킨라빈스 31 게임\n");
	printf("규칙 : 자신의 턴에 1부터 3까지의 숫자를 말할 수 있음.\n31을 말하면 패배\n");
	
	while(1)
	{
		if(cnt >= 31)
			break;
		else
		{
			printf("1부터 3까지 어느 숫자까지 얘기할지 입력해주세요 : ");
			scanf("%d", &n);
			
			temp = cnt;
			for(i = temp + 1; i <= (temp + n); i++)
			{
				printf("%d ", i);
				cnt++;
			}
			printf("\n");
			
			if(cnt == 31)
			{
				printf("computer win");
				break;
			}
			
			temp = cnt;
			srand(time(NULL));
			comNum = rand() % 3+1;
			printf("컴퓨터 : %d\n", comNum);
			
			for(i = temp + 1; i <= (temp + comNum); i++)
			{
				printf("%d ", i);
				cnt++;
			}
			printf("\n");
			
			if(cnt == 31)
			{
				printf("you win");
				break;
			}
		}
	}
}
