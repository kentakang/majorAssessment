#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void baskinRobbins()
{
	system("cls");
	int i, cnt = 0, n, temp, comNum;
	printf("����Ų��� 31 ����\n");
	printf("��Ģ : �ڽ��� �Ͽ� 1���� 3������ ���ڸ� ���� �� ����.\n31�� ���ϸ� �й�\n");
	while(1)
	{
		if(cnt >= 31)
			break;
		else
		{
			printf("1���� 3���� ��� ���ڱ��� ������� �Է����ּ��� : ");
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
			printf("��ǻ�� : %d\n", comNum);
			
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
	printf("��ǻ�Ϳ� ������������ �մϴ�. �＼���̿���.\n");
	while(1)
	{
		cnt++;
		printf("%d��° ��\n", cnt);
		printf("������ 1, ������ 2, ���� 3�Դϴ�.\n");
		printf("�Է� : ");
		scanf("%d", &i);
		srand(time(NULL));
		comNum = rand() % 3+1;
		if(comNum == 1)
			printf("��ǻ�ʹ� ������ �¾��\n");
		else if(comNum == 2)
			printf("��ǻ�ʹ� ������ �¾��\n");
		else
			printf("��ǻ�ʹ� ���� �¾��\n");
		if(i == 1)
		{
			if(comNum == 1)
			{
				printf("�����ϴ�.\n");
				draw++;
			}
			else if(comNum == 2)
			{
				printf("����� �Ф�\n");
				lose++;
			}
			else if(comNum == 3)
			{
				printf("�̰���!\n");
				win++;
			}
		}
		else if(i == 2)
		{
			if(comNum == 1)
			{
				printf("�̰���!\n");
				win++;
			}
			else if(comNum == 2)
			{
				printf("�����ϴ�.\n");
				draw++;
			}
			else if(comNum == 3)
			{
				printf("����� �Ф�\n");
				lose++;
			}
		}
		else if(i == 3)
		{
			if(comNum == 1)
			{
				printf("����� �Ф�\n");
				lose++;
			}
			else if(comNum == 2)
			{
				printf("�̰���!\n");
				win++;
			}
			else if(comNum == 3)
			{
				printf("�����ϴ�.\n");
				draw++;
			}
		}
		else
		{
			printf("�� �´��� �𸣴ϱ� ���ɷ� ġ��\n");
			lose++;
		}
		if(cnt == 3)
			break;
	}
	printf("�� ������ %d�� %d�� %d�� �Դϴ�.\n", win, draw, lose);
	Sleep(2000);
}

int main()
{
	int i, playCount = 0;
	while(1)
	{
		system("cls");
		printf("\n\t �̴ϰ���õ���� ���� �� ȯ���մϴ�\n\n");
		for(i = 1; i <= 17; i++)
		{
			if(i % 2 == 0)
			{
				printf(" ��");
				if(playCount == 0)
					Sleep(50);
			}
			else
			{
				printf(" ��");
				if(playCount == 0)
					Sleep(50);
			}	
		}
		printf("\n\n\t   �÷��� �� ������ �����ϼ���\n");
		printf("\t     1. �轺Ų��� 31\n");
		printf("\t     2. ���������� ����\n");
		printf("\t     3. ����\n\n");
		printf("\t   ���ڸ� �Է��ϼ��� : ");
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
