#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("**************************\n");
	printf("********1.��ʼ��Ϸ********\n");
	printf("********0.�˳���Ϸ********\n");
	printf("**************************\n");

}

void game()
{
	srand((time(NULL)));
	int num = rand()%100 + 1;
	int guess=0;
	
	while (1)
	{
		printf("�������(��Χ1-100����");
		scanf("%d", &guess);
		if (guess == num)
		{
			printf("�¶��ˣ�nb!\n");
			break;
		}
		else if (guess > num)
		{
			printf("�´��ˣ�\n");
		}
		else if (guess < num)
		{
			printf("��С�ˣ�\n");
		}
	}

}
int main()
{
	do
	{
		int i = 0;
		menu();
		scanf("%d", &i);
		if (0 == i)
		{
			break;
		}
		game();
	} while (1);


	return 0;
}