#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main_array(void)
{
	//배열 여러개의 변수를 함께 동시에생성
	/*
	int subway_array[3] = { 30, 40, 50 };//초기화를 안하면 더미값이 들어감
	for (int i = 0; i < 3; i++)
	{
		printf("지하철 %d호차에 %d명이 차고 있습니다.\n", i + 1, subway_array[i]);
	}
	*/
	//배열의 크기는 항상 상수로 선언(변수는 불가)

	//배열을 일부만 초기화해주면 나머지는 0값으로 처리된다.
	/*
	int arr[10] = { 1,2 };
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}*/

	//실수형 자료도 같다
	/*
	int arr[] = { 1,2 }; // = arr[2];
	float arr_f[5] = { 1.0f, 2.0f,3.0f };
	for (int i = 0; i < 5; i++) {
		printf("%f\n", arr_f[i]);
	}*/

	//문자 vs 문자열

	/*char c = 'A';
	printf("%c\n", c);*/

	/*char str[6] = "coding"; //[c][o][d][i][n][g]
	printf("%s\n", str); //이대로 출력하면 쓰래기값이 나옴
	//문자열의 끝에는 끝을 의미하는 NULL 문자 '\0'이 포함되어야 함 > char str[7]로 자리를 만들어줘아함*/

	/*char str_1[7] = "coding"; //[c][o][d][i][n][g][\0]
	printf("%s\n", str_1);	//이게 맞다*/

	char str[] = "coding";
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str));

	//한글자 씩 뽑아서 출력
	/*for (int i = 0; i < (sizeof(str)); i++) {
		printf("%c\n", str[i]); 
	}*/
	
	/*char kor[] = "승아보구싶다";
	printf("%s\n", kor);
	printf("%s\n", sizeof(kor));
	//영어 1글자당 1byte
	//한글 1글자당 2byte
	*/

	//문자열 심화 > 남는공간에는 널문자가 자동으로 들어간다
	/*
	char c_array[10] = { 'c','o','d','i','n','g' };
	printf("%s\n", c_array);
	for (int i = 0; i < sizeof(c_array); i++) {
		printf("%c\n", c_array[i]);
	}*/

	//아스키 코드 ASCII CODE 값 출력
	/*
	for (int i = 0; i < sizeof(c_array); i++) {
		printf("%d\n", c_array[i]);
	}*/
	/*
	7bit 총 128개 개드 0~127
	*/
	for (int i = 0; i < 128; i++) {
		printf("문자 %c는 ASCII CODE %d 이다\n", i, i);
	}


	
	


	return 0;
}