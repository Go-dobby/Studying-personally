#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//함수 선언 [함수를 쓸 것 이다] 형태 : 반환형 함수명(전달값);

//반환형은 return 해주는 형태


//반환 값이 없는 함수
void function_without_return();

//반환값이 있는 함수
int function_with_return();

//파라미터(전달값)가 없는 함수
void function_without_params();

//파라미터(전달값)가 있는 함수
void function_with_params(int a);

//반환값과 파라미터가 있는 함수
int function_with_return_params(int b);


void p(int num);

int main_1(void)
{
	function_without_return();
	int num = function_with_return();
	printf("%d", num);
	

	return 0;
}
//함수 정의
void p(int num)
{
	printf("num 은 %d입니다.\n", num);
}

void function_without_return()
{
	printf("반환값이 없는 함수입니다.\n");
}

int function_with_return()
{
	printf("반환값이 있는 함수입니다.\n");
	return 10;
}

void function_without_params()
{
	printf("전달값이 없는 함수입니다.\n");
}

void function_with_params(int a)
{
	printf("%d이라는 전달값이 있는 함수입니다.\n", a);
}

int function_with_return_params(int b)
{
	printf("%d라는 전달값과 10이라는 반환값이 있는 함수입니다.\n", b);

	return 10;
}