#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//프로잭트 힌트가 수식인 비밀번호가 걸려있는 문이 5단계로 이루어져있다. 수식은 점점더 어려워진다.
int getrandnum(int stage);
int showQuestion(int stage, int num1, int num2);

int main_project_function(void)
{
	srand(time(NULL));
	printf("당신은 지금 납치되었습니다. 이 곳을 탈출하려면 총 5개의 관문의 비밀번호를 풀어 문을 열어야합니다. \n                  게임을 포기하려면 -1을 입렵하시면 됩니다.\n");
	for (int stage = 1; stage <= 5; stage++)
	{
		int NUM1 = getrandnum(stage);
		int NUM2 = getrandnum(stage);
		int answer = showQuestion(stage, NUM1, NUM2);
		int playeranswer;
		scanf_s("%d", &playeranswer);
		if (playeranswer == -1)
		{
			printf("의지가 부족하시군요... 납치범에게 살해당하실겁니다. 그럼 이만..\n");
			break;
			
		}
		else if (answer != playeranswer) {
			printf("틀렸습니다. 경보가 울리고 납치범이 당신을 죽였습니다.\n");
			break;
		}
		else
		{
			if (stage >= 5) {
				printf("모든 관문을 통과 하고 탈출에 성공하셨습니다. 안전한 곳으로 가시고 빨리 경찰에 신고하세요\n");
				break;
			}
			printf("정답입니다. 다음단계로 넘어갑니다.\n");
		}
		
	}




	return 0;
}
int getrandnum(int stage)
{
	return rand() % (stage*stage * 8);
}

int showQuestion(int stage, int num1, int num2)
{
	printf("\n\n\n%d번째 관문 비밀번호 힌트 : %d X %d = ??\n", stage, num1, num2);
	printf("정확한 비밀번호를 입력하시오 : ");
	return num1 * num2;
}