#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void baskinRobbins()
{
	system("cls");
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
			
			if(cnt >= 31)
			{
				printf("computer win");
				Sleep(1000);
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
			
			if(cnt >= 31)
			{
				printf("you win");
				Sleep(1000);
				break;
			}
		}
	}
}

void rockPaper()
{
	system("cls");
	int i, cnt = 0, comNum, win = 0, lose = 0, draw = 0;
	printf("컴퓨터와 가위바위보를 합니다. 삼세판이에요.\n");
	while(1)
	{
		cnt++;
		printf("%d번째 판\n", cnt);
		printf("가위는 1, 바위는 2, 보는 3입니다.\n");
		printf("입력 : ");
		scanf("%d", &i);
		srand(time(NULL));
		comNum = rand() % 3+1;
		if(comNum == 1)
			printf("컴퓨터는 가위를 냈어요\n");
		else if(comNum == 2)
			printf("컴퓨터는 바위를 냈어요\n");
		else
			printf("컴퓨터는 보를 냈어요\n");
		if(i == 1)
		{
			if(comNum == 1)
			{
				printf("비겼습니다.\n");
				draw++;
			}
			else if(comNum == 2)
			{
				printf("졌어요 ㅠㅠ\n");
				lose++;
			}
			else if(comNum == 3)
			{
				printf("이겼어요!\n");
				win++;
			}
		}
		else if(i == 2)
		{
			if(comNum == 1)
			{
				printf("이겼어요!\n");
				win++;
			}
			else if(comNum == 2)
			{
				printf("비겼습니다.\n");
				draw++;
			}
			else if(comNum == 3)
			{
				printf("졌어요 ㅠㅠ\n");
				lose++;
			}
		}
		else if(i == 3)
		{
			if(comNum == 1)
			{
				printf("졌어요 ㅠㅠ\n");
				lose++;
			}
			else if(comNum == 2)
			{
				printf("이겼어요!\n");
				win++;
			}
			else if(comNum == 3)
			{
				printf("비겼습니다.\n");
				draw++;
			}
		}
		else
		{
			printf("뭘 냈는지 모르니까 진걸로 치죠\n");
			lose++;
		}
		if(cnt == 3)
			break;
	}
	printf("총 전적은 %d승 %d무 %d패 입니다.\n", win, draw, lose);
	Sleep(2000);
}

int main()
{
	int i, playCount = 0;
	while(1)
	{
		system("cls");
		printf("\n\t 미니게임천국에 오신 걸 환영합니다\n\n");
		for(i = 1; i <= 17; i++)
		{
			if(i % 2 == 0)
			{
				printf(" ★");
				if(playCount == 0)
					Sleep(50);
			}
			else
			{
				printf(" ☆");
				if(playCount == 0)
					Sleep(50);
			}	
		}
		printf("\n\n\t   플레이 할 게임을 선택하세요\n");
		printf("\t     1. 배스킨라빈스 31\n");
		printf("\t     2. 가위바위보 게임\n");
		printf("\t     3. 종료\n\n");
		printf("\t   숫자를 입력하세요 : ");
		scanf("%d", &i);
		if(i == 1)
		{
			baskinRobbins();
			playCount++;
		}
		if(i == 2)
		{
			rockPaper();
			playCount++;
		}
		if(i == 3)
		{
			break;
		}
	}
	return 0;
}
