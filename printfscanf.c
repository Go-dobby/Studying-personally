#include <stdio.h>
#include <time.h>		//�������� �̱����� �ش�
#include <stdlib.h>		//�������� �̱����� �ش�

int main_0(void) {
	//������ ���� ����
	/*int age = 12;

	printf("%d\n", age);
	age = 27;
	printf("%d\n", age);*/

	//�Ǽ��� ���� ����
	/*float f = 45.6f;
	//float ���� ����� ���� %f�� ����Ѵ�
	printf("%f\n", f);
	//�Ҽ��� �Ʒ��� ��°�ڸ� ���� ����� �������� �������ַ��� '%' �ڿ� '.���ϴ� ����'�� �Է��ϸ� �ȴ�.
	printf("%.2f\n", f);

	//double ���� ����� ���� %lf�� ����Ѵ�
	double d = 3.142592;
	printf("%lf\n", d);
	//�Ҽ��� �Ʒ� �ڸ����� �����ַ��� ���� ���������� �ϸ� �ȴ�.
	printf("%.2lf\n", d);*/

	//����� ���� ����
	/*const int SIBAL = 1938242;
	printf("%d\n", SIBAL);*/

	//printf
	//����
	/*int add = 3 + 7; //10
	printf("%d + %d = %d\n", 3, 7, 3 + 7);*/
	//scenf Ű���� �Է��� �޾Ƽ� ����
	/*int input;
	printf("���� �Է��ϼ��� ; ");
	scanf_s("%d", &input);
	printf("�Է��� �� : %d\n", input);*/

	/*int one, two, three;
	printf("������ ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù ��° ���� : %d\n", one);
	printf("�� ��° ���� : %d\n", two);
	printf("�� ��° ���� : %d\n", three);
	printf("�� ������ ���� ���� : %d\n", one + two + three);*/

	//����(�� ����), ���ڿ�(�� ���� �̻��� ���� ����)
	/*char c = 'A';
	printf("%c\n", c);*/
	//���ڿ�
	/*char str[256]; //���� �����ϱ����� ������ ����� ��
	scanf_s("%s", str, sizeof(str));// ���ڿ��� �Է� ���� ���� ũ�⸦ ��������� �Ѵ� ���⼱ str�� ũ�⸸ŭ ����
	printf("%s\n", str);*/

	//������Ʈ : �������� ������ �Ż� �Լ� (���� �ۼ�)
	/* �̸�, ����, ������, Ű, �˸�
	char name[777];
	int age;
	float weight;
	double hight;
	char guilt[777];
	printf("�̸��� ��� �ǽ���? ");
	scanf_s("%s", name, sizeof(name));
	printf("���̴� ��� �ǽ���? ");
	scanf_s("%d", &age);
	printf("�����Դ�? ");
	scanf_s("%f", &weight);
	printf("Ű. ");
	scanf_s("%lf", &hight);
	printf("�� �˸� �װ� �˷ȴ�!!!!!!");
	scanf_s("%s", guilt, sizeof(guilt));

	printf("���� %s�� %d���� ���̷�, ������ %.1fkg, Ű %.2lfcm��\n '%s' �� �ش��ϴ� �˸� ��������!!! ���� �������� ó�Ѵ�!!!!!!!! ", name, age, weight, hight, guilt);
	*/
	
	//'++' �� ���Ͽ�
	/*int b = 27;
	printf("%d\n", b++);	
	printf("'b++'�� ���ش��� b��� �� %d\n", b);
	printf("'++b'�� ������ ���� �ٷ� �������� ��µǹǷ� b���� %d�� �ȴ�\n", ++b);*/

	//for �� [for(����; ����; ������ ����)] > 1���� 10���� ���
	/*for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
	}*/

	//while(����){} for���� ���ǰ� ������ ���� �������� while �ݺ������� ���� ������ ���ְ� ���ο��� �����������
	//1���� 10���� ���
	/*int i = 1;
	while (i <= 10) {
		printf("%d\n", i);
		i++;
	}*/
	//do while
	//do {���๮} while(����);
	/*int i = 1;
	do {
		printf("%d\n", i);
		i++;
	} while (i <= 10);*/

	//2�� �ݺ���(������)
	
	/*for (int i=1; i <= 9; i++) {
		for (int j=1; j <= 9; j++) {
			prin1tf("%d X %d = %d\n", i, j, i * j);
			
		}
		
	}*/
	
	/*
	���� 1������ 5�� ���� ���� ���
	*/
	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/
	//���� ���� ���
	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4 - i; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}*/
	/*���� ���� ��°�
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 4; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	} */

	//������Ʈ �Ƕ�̵带 �׾ƶ�(���ϴ� ������ �Է� �ް� ������)
/*int floor;

printf("������ �Ƕ�̵带 ������ �����Ͻÿ� : ");
scanf_s("%d", &floor);
for (int i = 0; i < floor; i++) {
	for (int j = i; j < floor -1; j++) {
		printf(" ");
	}
	for (int k = 0; k < 2*i+1; k++) {
		printf("*");
	}
	printf("\n");
}*/
//����/ �б�
//if else, break, continue, switch

//if else ���̸� ������ �� �̼����ڰ� �������� ����(�Ϲ��� : 20�� �̻�
/*int age;
printf("���̸� �Է��Ͻÿ� : ");
scanf_s("%d",&age);
if (age < 20) {
	printf("�̼������Դϴ�.\n");
}
else {
	printf("�����Դϴ�.\n");
}*/
//if() {} else if(){} ��(8~13) ��(14~16) ��(17~19)�� �����ٸ� 
/*int age;
printf("����� ���̸� �Է��ϼ��� : ");
scanf_s("%d", &age);
if (age <= 13 && age >= 8)printf("����� �ʵ��л��Դϴ�.\n");
else if (age >= 14 && age <= 16)printf("����� ���л��Դϴ�.\n");
else if (age >= 17 && age <= 19)printf("����� ����л��Դϴ�. \n");
else printf("����� �л��� �ƴϰų� ���л��Դϴ�.");*/

//break, continue
//break 1������ 30�� ���� �ִ� �ݿ��� 1������ 5������ ���� ��ǥ�� �մϴ�.
	/*for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("�ٸ� �л��� ����ϼ���\n");
			break; }
		printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���\n", i);

	}*/

//continue : continue �Ʒ��� ������ �������� �ʰ� ���� �ݺ��� ����
//1�� ���� 30�� ���� �ִ� �ݿ��� 6������ 10������ ���� ��ǥ ���� 7���� ���ļ� �Ἦ

/*for (int i = 1; i <= 30; i++)
		{
			if (i == 7)
			{
				printf("%d�� �л��� ���� ���ļ� �Ἦ�Դϴ�.\n", i);
				continue;
			}
			if (i <= 10 && i >= 6)
			{
				printf("%d�� �л��� ��ǥ�غ� �Ͻʽÿ�\n", i);
			}
		}*/

//&&(�Ѵ� ����), ||(���� �ϳ��� �����ص� ����)

//������

//srand(time(NULL)); // ���� �ʱ�ȭ

//int num = rand() % 3 + 1; //0+1 ~ 2+1 = 1 ~ 3 (% : ������ ���� ������)
/*printf("�����ʱ�ȭ ����.. \n");
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", rand() % 10);
		}
		srand(time(NULL)); //���� �ʱ�ȭ
		printf("\n\n���� �ʱ�ȭ ���� \n");
		for (int i = 0; i < 10; i++) {
			printf("%d ", rand() % 10);
		}*/

//switch case ���������� ����

//switch(���ǿ� �ش��ϴ� ����)
//{
//case ������ ��0 : ���ǿ� �ش��ϴ� ������ ���� case�ڿ� �ִ� ������ ��0�� ������ �� ������ ����; break(���๮�� �����ϰ� Ż��);
//case ������ ��1 : ���ǿ� �ش��ϴ� ������ ���� case�ڿ� �ִ� ������ ��1�� ������ �� ������ ����; break(���๮�� �����ϰ� Ż��);
//case ������ ��2 : ���ǿ� �ش��ϴ� ������ ���� case�ڿ� �ִ� ������ ��2�� ������ �� ������ ����; break(���๮�� �����ϰ� Ż��);
//defualt : ���ǿ� �ش��ϴ� ������ ������ ����Ǵ� ����
//}
//break; �� ������ �ش��ϴ� ������ ���๮�� �����ϰ� �� �Ʒ��� ������ �� �����Ų��

/*srand(time(NULL));
 //���� 0 ���� 1 �� 2

int num = rand() % 3;

switch (num)
{
case 0: printf("����\n"); break;
case 1: printf("����\n"); break;
case 2: printf("��\n"); break;
default:printf("�����\n");
}*/

//������Ʈ up dowm

/*srand(time(NULL));

int num = rand() % 100 + 1; // 1~100 ����
printf("���� ���ڴ� : %d\n", num);
	int answer = 0; // ����
	int chanse = 5; // ��ȸ

	while (chanse)
	{
		printf("1~100 �߿��� �������� �����Ǵ� ���ڸ� �Է��Ͻÿ�(������ȸ %d) : ",chanse);
		scanf_s("%d", &answer);
		if (answer > num)
		{
			printf("%d�� ���亸�� ū �����Դϴ�.\n", answer);
		}
		else if (answer < num)
		{
			printf("%d�� ���亸�� ���� �����Դϴ�.\n", answer);
		}
		else {
			printf("�����Դϴ�!!!!!\n");
			break;
		}
		chanse--;
	}*/






	return 0;

	
} //main

