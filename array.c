#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main_array(void)
{
	//�迭 �������� ������ �Բ� ���ÿ�����
	/*
	int subway_array[3] = { 30, 40, 50 };//�ʱ�ȭ�� ���ϸ� ���̰��� ��
	for (int i = 0; i < 3; i++)
	{
		printf("����ö %dȣ���� %d���� ���� �ֽ��ϴ�.\n", i + 1, subway_array[i]);
	}
	*/
	//�迭�� ũ��� �׻� ����� ����(������ �Ұ�)

	//�迭�� �Ϻθ� �ʱ�ȭ���ָ� �������� 0������ ó���ȴ�.
	/*
	int arr[10] = { 1,2 };
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}*/

	//�Ǽ��� �ڷᵵ ����
	/*
	int arr[] = { 1,2 }; // = arr[2];
	float arr_f[5] = { 1.0f, 2.0f,3.0f };
	for (int i = 0; i < 5; i++) {
		printf("%f\n", arr_f[i]);
	}*/

	//���� vs ���ڿ�

	/*char c = 'A';
	printf("%c\n", c);*/

	/*char str[6] = "coding"; //[c][o][d][i][n][g]
	printf("%s\n", str); //�̴�� ����ϸ� �����Ⱚ�� ����
	//���ڿ��� ������ ���� �ǹ��ϴ� NULL ���� '\0'�� ���ԵǾ�� �� > char str[7]�� �ڸ��� ����������*/

	/*char str_1[7] = "coding"; //[c][o][d][i][n][g][\0]
	printf("%s\n", str_1);	//�̰� �´�*/

	char str[] = "coding";
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str));

	//�ѱ��� �� �̾Ƽ� ���
	/*for (int i = 0; i < (sizeof(str)); i++) {
		printf("%c\n", str[i]); 
	}*/
	
	/*char kor[] = "�¾ƺ����ʹ�";
	printf("%s\n", kor);
	printf("%s\n", sizeof(kor));
	//���� 1���ڴ� 1byte
	//�ѱ� 1���ڴ� 2byte
	*/

	//���ڿ� ��ȭ > ���°������� �ι��ڰ� �ڵ����� ����
	/*
	char c_array[10] = { 'c','o','d','i','n','g' };
	printf("%s\n", c_array);
	for (int i = 0; i < sizeof(c_array); i++) {
		printf("%c\n", c_array[i]);
	}*/

	//�ƽ�Ű �ڵ� ASCII CODE �� ���
	/*
	for (int i = 0; i < sizeof(c_array); i++) {
		printf("%d\n", c_array[i]);
	}*/
	/*
	7bit �� 128�� ���� 0~127
	*/
	for (int i = 0; i < 128; i++) {
		printf("���� %c�� ASCII CODE %d �̴�\n", i, i);
	}


	
	


	return 0;
}