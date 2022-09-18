#include<stdio.h>
#include<time.h>
#include<Windows.h>


int main_UpDown(void)
{
	system("color F0");

	srand(time(NULL));
	int num = rand() % 100 + 1;
	int answer;
	int count = 0;

	printf("enter를 눌러 계속하세요\n\n");
	
	while (1)
	{
		count++;
		printf("1 ~ 100 사이의 숫자 입력 :");
		scanf_s("%d", &answer);
		if (answer < 101 && answer > 0)
		{
			if (answer == num)
			{
				printf("good\n");
				printf("시도 횟수 : %d", count);
				break;
			}
			else if (answer > num)
			{
				printf("--> down\n\n");
			}
			else if (answer < num)
			{
				printf("--> up\n\n");

			}
		}
		else
		{
			printf("bad number\n\n");
		}
		
	}


	return 0;
}