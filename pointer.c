#include <stdio.h>

//void swap(int a, int b);
//void swap_addr(int *a, int *b);
void changeArray(int* ptr);
int main_pointer(void)
{
	//포인터
	
	/*
	//[철수] 101호
	//[영희] 201호
	//[민수] 301
	//각 문 앞에 '암호'가 걸려있음

	int cs = 1; //암호 
	int yh = 2;
	int ms = 3;

	printf("철수네 주소 : %p, 암호 : %d\n", &cs, cs);
	printf("영희네 주소 : %p, 암호 : %d\n", &yh, yh);
	printf("민수네 주소 : %p, 암호 : %d\n", &ms, ms);

	//미션맨!

	//첫 번째 미션 : 아파트의 각 집에 방문하여 문에 적힌 암호 확인
	int * 미션맨 = &cs; // 포인터 변수 
		 //미션맨 = 철수의 주소
		printf("미션맨이 방문하는 곳 주소 : %p, 암호 : %d\n", 미션맨, *미션맨); // *미션맨 : 주소에 있는 값

		미션맨 = &yh; //미션맨 = 영희의 주소
		printf("미션맨이 방문하는 곳 주소 : %p, 암호 : %d\n", 미션맨, *미션맨); // *미션맨 : 주소에 있는 값

		미션맨 = &ms; //미션맨 = 철수의 주소
		printf("미션맨이 방문하는 곳 주소 : %p, 암호 : %d\n", 미션맨, *미션맨); // *미션맨 : 주소에 있는 값
	//포인터 변수에 주소값을 넣고 변수 앞에 '*'을 붙이면 주소에 있는 값을 읽어올 수 있다

	//두 번째 미션 : 각 암호에 3을 곱해라
		미션맨 = &cs;
		*미션맨 = *미션맨 * 3;
		printf("미션맨이 암호를 바꾼 곳 곳 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);

		미션맨 = &yh;
		*미션맨 = *미션맨 * 3;
		printf("미션맨이 암호를 바꾼 곳 곳 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);

		미션맨 = &ms;
		*미션맨 = *미션맨 * 3;
		printf("미션맨이 암호를 바꾼 곳 곳 주소 : %p, 암호 : %d\n", 미션맨, *미션맨);

	// >> 포인터 변수는 주소값을 알고있는 변수에 찾아가서 값도 바꿀수 있고 주소도 알아올 수 있다


		//스파이
		// 미션맨이 바꾼 암호에서 2를 빼라

		int* 스파이 = 미션맨; //스파이라는 포인터 변수가 있고 이 포인터 변수에 미션맨값
		//(미션맨이라는 포인터 변수엔 주소값이 들어가 있으므로 주소값이 들어감)
		//스파이, 미션맨 이 두개의 포인터 변수가 있다.
		//이 둘이 가르키는 것이 누군가의 아파트의 주소 (두 개의 포인터 변수가 같은 주소를 가르킬 수 있다.
		
		
		printf("\n\n .....스파이가 미션 수행하는 중.......\n\n");
		스파이 = &cs; //스파이가 철수의 주소를 가르킴
		*스파이 = *스파이 - 2; //스파이가 철수의 주소에 있는 값을 -2해주어 바꿈
		printf("스파이가 방문하는 곳의 주소 : %p,    암호 : %d\n", 스파이, *스파이);

		스파이 = &yh; //스파이가 영희의 주소를 가르킴
		*스파이 = *스파이 - 2; //스파이가 영희의 주소에 있는 값을 -2해주어 바꿈
		printf("스파이가 방문하는 곳의 주소 : %p,    암호 : %d\n", 스파이, *스파이);

		스파이 = &ms; //스파이가 민수의 주소를 가르킴
		*스파이 = *스파이 - 2; //스파이가 민수의 주소에 있는 값을 -2해주어 바꿈
		printf("스파이가 방문하는 곳의 주소 : %p,    암호 : %d\n", 스파이, *스파이);

		printf("\n\n=====미션맨과 스파이가 다녀한후 =========\n\n");

		printf("철수네 주소 : %p, 암호 : %d\n", &cs, cs);
		printf("영희네 주소 : %p, 암호 : %d\n", &yh, yh);
		printf("민수네 주소 : %p, 암호 : %d\n", &ms, ms);
		//지금 암호값(주소에 있는 변수값)까지 변하다
		//'어떤 값'을 가진'어떤 변수'의 '주소'를 가르키는 '포인터 변수'로 '어떤 변수'가 가진 '어떤 값'도 바꿀 수 있다 

		//포인터 변수의 주소도 알 수 있다. ex)&미션맨
		printf("미션맨의 주소 : %p\n", &미션맨);
		printf("스파이의 주소 : %p", &스파이);

		&는 주소를 의미하고 *은 주소의 값이기 때문에 *&은 서로 상쇄된다.
		*/

		//'어떤 값'을 가진'어떤 변수'의 '주소'를 가르키는 '포인터 변수(ex : int *a)'로 '어떤 변수'가 가진 '어떤 값'도 바꿀 수 있다 
		//물론 포인터 변수의 주소도 알 수 있다.

	//배열과 포인터의 관계
	//배열?
	/*int arr[] = { 5, 10, 15 };
	int* ptr = arr; //포인터 변수
	for (int i = 0; i < 3; i++) {
		//printf("배열 arr[%d]값 : %d\n", i, arr[i]);
		printf("배열 arr[%d] 의 값 : %d\n", i, *(arr + i));//arr 자체는 arr 주소값을 가지고있다 
															// >> *(arr + i) = 주소로부터 i번째에 있는 값을 가져온다.는 뜻
	}
	for (int i = 0; i < 3; i++) {
		//printf("배열 ptr[%d]값 : %d\n", i, ptr[i]);
		printf("배열 ptr[%d]값 : %d\n", i, *(ptr + i));
	}
	//포인터가 각각 배열 요소에 그대로 가서 값을 바꿈
	//*(arr + i) == arr[i] 같은 표현이다
	//arr == arr 배열의 첫번째 값의 주소와 동일 == &arr[0]
	printf("arr자체의 값 : %d\n", arr);
	printf("arr[0]의 주소 : %d\n", &arr[0]);
	printf("ptr의 값 : %d\n", ptr);
	printf("arr 자체는 주소를 의미합니다. 그러면 그 주소에 있는 실제 값 : %d\n", *arr);
	printf("arr[0] 의 실제 값 = *&arr[0] = %d\n", *&arr[0]);*/

	//swap

/*int a = 10;
int b = 20;
printf("a의 주소는 %d\n", &a);
printf("b의 주소는 %d\n", &b);
//a와 b의 값을 바꾼다
printf("swap 함수 전 => a : %d, b = %d\n", a, b);
swap(a, b);
printf("swap 함수 후 => a : %d, b = %d\n", a, b);
//함수 안에서만 바뀜 함수를 나오면 끝임
//값에 의한 복사 (Call by Value) ->값만 복사한다는 의미
//main함수 내 a, b와 swap함수 내의 a,b가 다르다
printf("swap_addr 함수(주소값 전달) 전 => a : %d, b = %d\n", a, b);
swap_addr(&a, &b); //주소값을 전달받음
printf("swap_addr 함수(주소값 전달) 후 => a : %d, b = %d\n", a, b);
*/

//포인터로 배열 값 바꾸기
int arr2[3] = { 10, 20, 30 }; //배열일 때 arr2 자체가 주소
changeArray(arr2); // ==changeArray(&arr2[0]);
for (int i = 0; i < 3; i++)
{
	printf("%d\n", arr2[i]);
}


		return 0;
}

void changeArray(int* ptr) {

	ptr[2] = 300;
}

/*void swap(int a, int b)
{ 
	printf("Swap 함수 내 a의 주소는 %d\n", &a); // 주소값이 다름
	printf("Swap 함수 내 b의 주소는 %d\n", &b);	// 주소값이 다름
	int temp = a;
	a = b;
	b = temp;
	printf("swap 함수 내 => a : %d, b = %d\n", a, b);
}
void swap_addr(int *a, int *b) //포인터 변수 (주소값)를 받음
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("swap_addr 함수(주소값 전달) 내 => a : %d, b = %d\n", *a, *b);
}*/