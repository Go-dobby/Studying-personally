#include <stdio.h>
#include <time.h>		//clock 함수를 쓰기위한 해더

//물고기 6마리가 사막의 어항에 있다
//사막은 너무 더워서 물이 빨리 증발을 한다
//물이 빨리 증발하기 전에 어항에 물을 줘서 물고기를 살려라

int level;		//레벨 변수
int arrayFish[6];			//어항6개 배열
int* cursor;		//어항을 찾아가서 물을 주는 역활을하는 포인터 변수


void initData(void);
void printfFishes(void);
void decreaseWater(long elapsedTime);

int main(void)
{
	long startTime = 0; //게임 시작 시간
	long totalElapsedTime = 0;	// 총 경과 시간
	long prevElapsedTime = 0; //직전 경과시간 (최근에 물을 준 시간 간격)

	int num;	// 몇 번 어항에 물을 줄 것인지. 사용자 입력
	initData();		//게임 초기화 함수

	cursor = arrayFish; // cursor[0]....

	startTime = clock(); //프로잭트를 시작하고 몇초가 지났는지 현재 시간을 millisecond로 반환

	while (1)
	{
		printfFishes();		//어항의 상태보고
		printf("몇 번의 어항에 물을 주겠는가? ");
		scanf_s("%d", &num);

		//입력값 체크
		if (num < 1 || num > 6) {
			printf("\n입력값이 잘못 됨\n");
			continue;
		}

		//총 경과 시간
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과 시간은 : %ld 초\n", totalElapsedTime);

		//직전 물 준 시간 (마지막으로 물 준 시간) 마지막으로 물을 주고나서 얼마가 지났는지
		prevElapsedTime = totalElapsedTime - prevElapsedTime; 
		printf("최근 경과시간 : %ld 초\n", prevElapsedTime);

		// 어항의 물 증발 함수
		decreasWater(prevElapsedTime);

		//사용자가 입력한 어항에 물을 준다
		// 1. 어항의 물이 0이면 물을 주지 못한다.
		if (cursor[num - 1] <= 0)
		{
			printf("%d 번 물고기는 이미 죽었습니다.. 물을 줄 수가 없습니다.\n", num);
		}
		//2. 어항의 물이 0이 아닌경우 물을 준다
		else if (cursor[num - 1] >= 0)
		{
			printf("%d 번 어항에 물을 줍니다.\n", num);
			cursor[num - 1] += 1;
			if (cursor[num - 1] >= 100) {
				cursor[num - 1] = 100;
			}
		}
		// 레벨업을 할 건지 확인 (레벨업은 20초마다 한 번씩 수행
		if (totalElapsedTime / 20 > level - 1)
		{
			level++;
			printf("******레벨업 했습니다. %d > %d******\n\n", level + 1, level);

			if (level == 5)
			{
				printf("\n\n 축하드립니다. 최고레벨에 도달하셨습니다. 게임을 종료합니다.\n");
				exit(0);
			}
		}

		//모든 물고기가 죽었는지 확인
		if (checkFishAlive() = 0)
		{
			//물고기가 다 뒤짐
			printf("물고기가 다 뒤졌습니다. 미션 실패 게임을 종료합니다.\n")
		}
		else {

		}


	}


	return 0;
}

void initData()
{
	level = 1; // 게임 레벨 (1 ~ 5);
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; // 어항의 물 높이(0 ~ 100)
	}
}
void printfFishes()		//어항의 상태보고
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]);
	}
	printf("\n\n");
}
void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime);
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1;
	}
	return 0;
}