#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//�Լ� ���� [�Լ��� �� �� �̴�] ���� : ��ȯ�� �Լ���(���ް�);

//��ȯ���� return ���ִ� ����


//��ȯ ���� ���� �Լ�
void function_without_return();

//��ȯ���� �ִ� �Լ�
int function_with_return();

//�Ķ����(���ް�)�� ���� �Լ�
void function_without_params();

//�Ķ����(���ް�)�� �ִ� �Լ�
void function_with_params(int a);

//��ȯ���� �Ķ���Ͱ� �ִ� �Լ�
int function_with_return_params(int b);


void p(int num);

int main_1(void)
{
	function_without_return();
	int num = function_with_return();
	printf("%d", num);
	

	return 0;
}
//�Լ� ����
void p(int num)
{
	printf("num �� %d�Դϴ�.\n", num);
}

void function_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}

int function_with_return()
{
	printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return 10;
}

void function_without_params()
{
	printf("���ް��� ���� �Լ��Դϴ�.\n");
}

void function_with_params(int a)
{
	printf("%d�̶�� ���ް��� �ִ� �Լ��Դϴ�.\n", a);
}

int function_with_return_params(int b)
{
	printf("%d��� ���ް��� 10�̶�� ��ȯ���� �ִ� �Լ��Դϴ�.\n", b);

	return 10;
}