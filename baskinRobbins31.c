#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
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
			
			if(cnt == 31)
			{
				printf("computer win");
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
			
			if(cnt == 31)
			{
				printf("you win");
				break;
			}
		}
	}
}
