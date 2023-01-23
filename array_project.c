#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main_array_project(void) {

	srand(time(NULL));
	printf("\n\n ====�������� ��Ӹ� ���� =====\n\n");
	int answer; // ����� �Է°�
	int treatment = rand() % 4; // �߸��� ����

	int cntShowBottle = 0; // �̹� ���ӿ� ������ �� ���� (�� ���Ӱ� �ٸ�
	int prevCntShowBottle = 0; //�� ���ӿ� ������ �� ����

	//������ �����ִ� �� ������ �ٸ��� �Ͽ� ����� ���

	//3���� ��ȸ
	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0,0,0,0 }; //4���� ��
		do {
			cntShowBottle = rand() % 2 + 2; //������ �� ����
		} while (cntShowBottle == prevCntShowBottle);
		prevCntShowBottle = cntShowBottle;
		int isIncluded = 0; //������ �� �߿� �߸����� ���ԵǾ����� ����
		printf(" > %d ��° �õ� : \n", i);

		//������ �� ������ ����, ���ð� �̼����� 1,0���� ���� >>������ �� ���� ��ŭ ������
		for (int j = 0; j < cntShowBottle; j++) {
			int randBottle = rand() % 4; // 0~3 0��~3�� �߿� ����
			
			//���� ���õ��� ���� ���̸�, ����ó�� (1�� �ٲ�)
			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1;
				
				if (treatment == randBottle) { //���õ� ���� �߸���� 
					isIncluded = 1;
				}
			}
			//�̹� ���õ� ���̸� �ߺ��̹Ƿ� �ٽ� ����
			else
			{
				j--; // �����ϴ� �ݺ��� Ƚ�� 1����
			}

		}

		//����ڿ��� ���� ǥ��
		for (int k = 0; k < 4; k++) {
			if (bottle[k] == 1) {
				printf("%d ������ �Ӹ��� �ٸ��ϴ�.\n\n", k + 1);
			}
		}
		if (isIncluded == 1)
		{
			printf("  >>�Ӹ�ī���� �ڶ󳵱���...!! ���� �����ϴ�.\n");
		}
		else {
			printf(" >>�Ӹ�ī���� �ڶ��� �ʾҽ��ϴ�.\n\n");
		}

		printf("\n .....��� �Ϸ��� �ƹ�Ű�� ���缼��......");
		getchar();
	}

	printf("\n\n�߸����� �� �� �ϱ��?......");
	scanf_s("%d", &answer);

	if (answer == treatment+1)
	{
		printf("\n\n.....�����Դϴ�!!!!!!....");
	}
	else {
		printf("\n\n.....��!... ������ �ƴմϴ�..... ������ %d �Դϴ�.", treatment+1);
	}


	return 0;
}