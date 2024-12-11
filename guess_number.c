#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("**************************\n");
	printf("********1.开始游戏********\n");
	printf("********0.退出游戏********\n");
	printf("**************************\n");

}

void game()
{
	srand((time(NULL)));
	int num = rand()%100 + 1;
	int guess=0;
	
	while (1)
	{
		printf("请猜数字(范围1-100）：");
		scanf("%d", &guess);
		if (guess == num)
		{
			printf("猜对了！nb!\n");
			break;
		}
		else if (guess > num)
		{
			printf("猜大了！\n");
		}
		else if (guess < num)
		{
			printf("猜小了！\n");
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