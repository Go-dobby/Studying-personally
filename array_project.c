#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main_array_project(void) {

	srand(time(NULL));
	printf("\n\n ====선생님은 대머리 게임 =====\n\n");
	int answer; // 사용자 입력값
	int treatment = rand() % 4; // 발모제 선택

	int cntShowBottle = 0; // 이번 게임에 보여줄 병 개수 (전 게임과 다름
	int prevCntShowBottle = 0; //앞 게임에 보여준 병 갯수

	//이전과 보여주는 병 개수를 다르게 하여 정답률 향상

	//3번의 기회
	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0,0,0,0 }; //4개의 병
		do {
			cntShowBottle = rand() % 2 + 2; //보여줄 병 개수
		} while (cntShowBottle == prevCntShowBottle);
		prevCntShowBottle = cntShowBottle;
		int isIncluded = 0; //보여줄 병 중에 발모제가 포함되었는지 여부
		printf(" > %d 번째 시도 : \n", i);

		//보여줄 병 종류를 선택, 선택과 미선택은 1,0으로 구분 >>보여줄 병 개수 만큼 병선택
		for (int j = 0; j < cntShowBottle; j++) {
			int randBottle = rand() % 4; // 0~3 0번~3번 중에 선택
			
			//아직 선택되지 않은 병이면, 선택처리 (1로 바꿈)
			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1;
				
				if (treatment == randBottle) { //선택된 병이 발모재면 
					isIncluded = 1;
				}
			}
			//이미 선택된 병이면 중복이므로 다시 선택
			else
			{
				j--; // 선택하는 반복문 횟수 1증가
			}

		}

		//사용자에게 문제 표시
		for (int k = 0; k < 4; k++) {
			if (bottle[k] == 1) {
				printf("%d 물약을 머리에 바릅니다.\n\n", k + 1);
			}
		}
		if (isIncluded == 1)
		{
			printf("  >>머리카락이 자라났군요...!! 아쥬 좋습니다.\n");
		}
		else {
			printf(" >>머리카락이 자라나지 않았습니다.\n\n");
		}

		printf("\n .....계속 하려면 아무키나 누루세요......");
		getchar();
	}

	printf("\n\n발모제는 몇 번 일까요?......");
	scanf_s("%d", &answer);

	if (answer == treatment+1)
	{
		printf("\n\n.....정답입니다!!!!!!....");
	}
	else {
		printf("\n\n.....땡!... 정답이 아닙니다..... 정답은 %d 입니다.", treatment+1);
	}


	return 0;
}