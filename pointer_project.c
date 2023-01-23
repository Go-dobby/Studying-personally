#include <stdio.h>
#include <time.h>		//clock �Լ��� �������� �ش�

//����� 6������ �縷�� ���׿� �ִ�
//�縷�� �ʹ� ������ ���� ���� ������ �Ѵ�
//���� ���� �����ϱ� ���� ���׿� ���� �༭ ����⸦ �����

int level;		//���� ����
int arrayFish[6];			//����6�� �迭
int* cursor;		//������ ã�ư��� ���� �ִ� ��Ȱ���ϴ� ������ ����


void initData(void);
void printfFishes(void);
void decreaseWater(long elapsedTime);

int main(void)
{
	long startTime = 0; //���� ���� �ð�
	long totalElapsedTime = 0;	// �� ��� �ð�
	long prevElapsedTime = 0; //���� ����ð� (�ֱٿ� ���� �� �ð� ����)

	int num;	// �� �� ���׿� ���� �� ������. ����� �Է�
	initData();		//���� �ʱ�ȭ �Լ�

	cursor = arrayFish; // cursor[0]....

	startTime = clock(); //������Ʈ�� �����ϰ� ���ʰ� �������� ���� �ð��� millisecond�� ��ȯ

	while (1)
	{
		printfFishes();		//������ ���º���
		printf("�� ���� ���׿� ���� �ְڴ°�? ");
		scanf_s("%d", &num);

		//�Է°� üũ
		if (num < 1 || num > 6) {
			printf("\n�Է°��� �߸� ��\n");
			continue;
		}

		//�� ��� �ð�
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("�� ��� �ð��� : %ld ��\n", totalElapsedTime);

		//���� �� �� �ð� (���������� �� �� �ð�) ���������� ���� �ְ��� �󸶰� ��������
		prevElapsedTime = totalElapsedTime - prevElapsedTime; 
		printf("�ֱ� ����ð� : %ld ��\n", prevElapsedTime);

		// ������ �� ���� �Լ�
		decreasWater(prevElapsedTime);

		//����ڰ� �Է��� ���׿� ���� �ش�
		// 1. ������ ���� 0�̸� ���� ���� ���Ѵ�.
		if (cursor[num - 1] <= 0)
		{
			printf("%d �� ������ �̹� �׾����ϴ�.. ���� �� ���� �����ϴ�.\n", num);
		}
		//2. ������ ���� 0�� �ƴѰ�� ���� �ش�
		else if (cursor[num - 1] >= 0)
		{
			printf("%d �� ���׿� ���� �ݴϴ�.\n", num);
			cursor[num - 1] += 1;
			if (cursor[num - 1] >= 100) {
				cursor[num - 1] = 100;
			}
		}
		// �������� �� ���� Ȯ�� (�������� 20�ʸ��� �� ���� ����
		if (totalElapsedTime / 20 > level - 1)
		{
			level++;
			printf("******������ �߽��ϴ�. %d > %d******\n\n", level + 1, level);

			if (level == 5)
			{
				printf("\n\n ���ϵ帳�ϴ�. �ְ����� �����ϼ̽��ϴ�. ������ �����մϴ�.\n");
				exit(0);
			}
		}

		//��� ����Ⱑ �׾����� Ȯ��
		if (checkFishAlive() = 0)
		{
			//����Ⱑ �� ����
			printf("����Ⱑ �� �������ϴ�. �̼� ���� ������ �����մϴ�.\n")
		}
		else {

		}


	}


	return 0;
}

void initData()
{
	level = 1; // ���� ���� (1 ~ 5);
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; // ������ �� ����(0 ~ 100)
	}
}
void printfFishes()		//������ ���º���
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
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