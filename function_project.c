#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//������Ʈ ��Ʈ�� ������ ��й�ȣ�� �ɷ��ִ� ���� 5�ܰ�� �̷�����ִ�. ������ ������ ���������.
int getrandnum(int stage);
int showQuestion(int stage, int num1, int num2);

int main_project_function(void)
{
	srand(time(NULL));
	printf("����� ���� ��ġ�Ǿ����ϴ�. �� ���� Ż���Ϸ��� �� 5���� ������ ��й�ȣ�� Ǯ�� ���� ������մϴ�. \n                  ������ �����Ϸ��� -1�� �Է��Ͻø� �˴ϴ�.\n");
	for (int stage = 1; stage <= 5; stage++)
	{
		int NUM1 = getrandnum(stage);
		int NUM2 = getrandnum(stage);
		int answer = showQuestion(stage, NUM1, NUM2);
		int playeranswer;
		scanf_s("%d", &playeranswer);
		if (playeranswer == -1)
		{
			printf("������ �����Ͻñ���... ��ġ������ ���ش��Ͻǰ̴ϴ�. �׷� �̸�..\n");
			break;
			
		}
		else if (answer != playeranswer) {
			printf("Ʋ�Ƚ��ϴ�. �溸�� �︮�� ��ġ���� ����� �׿����ϴ�.\n");
			break;
		}
		else
		{
			if (stage >= 5) {
				printf("��� ������ ��� �ϰ� Ż�⿡ �����ϼ̽��ϴ�. ������ ������ ���ð� ���� ������ �Ű��ϼ���\n");
				break;
			}
			printf("�����Դϴ�. �����ܰ�� �Ѿ�ϴ�.\n");
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
	printf("\n\n\n%d��° ���� ��й�ȣ ��Ʈ : %d X %d = ??\n", stage, num1, num2);
	printf("��Ȯ�� ��й�ȣ�� �Է��Ͻÿ� : ");
	return num1 * num2;
}