#include <stdio.h>
#include <time.h>		//랜덤수를 뽑기위한 해더
#include <stdlib.h>		//랜덤수를 뽑기위한 해더

int main_0(void) {
	//정수형 변수 예제
	/*int age = 12;

	printf("%d\n", age);
	age = 27;
	printf("%d\n", age);*/

	//실수형 변수 예제
	/*float f = 45.6f;
	//float 형을 출력할 때는 %f를 사용한다
	printf("%f\n", f);
	//소숫점 아래에 몇째자리 까지 출력이 가능한지 설정해주려면 '%' 뒤에 '.원하는 숫자'를 입력하면 된다.
	printf("%.2f\n", f);

	//double 형을 출력할 때는 %lf를 사용한다
	double d = 3.142592;
	printf("%lf\n", d);
	//소수점 아랫 자릿수를 정해주려면 위와 마찬가지로 하면 된다.
	printf("%.2lf\n", d);*/

	//상수형 변수 예제
	/*const int SIBAL = 1938242;
	printf("%d\n", SIBAL);*/

	//printf
	//연산
	/*int add = 3 + 7; //10
	printf("%d + %d = %d\n", 3, 7, 3 + 7);*/
	//scenf 키보드 입력을 받아서 저장
	/*int input;
	printf("값을 입력하세요 ; ");
	scanf_s("%d", &input);
	printf("입력한 값 : %d\n", input);*/

	/*int one, two, three;
	printf("세개의 정수를 입력하시오 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫 번째 값은 : %d\n", one);
	printf("두 번째 값은 : %d\n", two);
	printf("세 번째 값은 : %d\n", three);
	printf("세 정수를 더한 값은 : %d\n", one + two + three);*/

	//문자(한 글자), 문자열(한 글자 이상의 여러 글자)
	/*char c = 'A';
	printf("%c\n", c);*/
	//문자열
	/*char str[256]; //문자 저장하기위한 공간을 만드는 것
	scanf_s("%s", str, sizeof(str));// 문자열을 입력 받을 때엔 크기를 지정해줘야 한다 여기선 str의 크기만큼 지정
	printf("%s\n", str);*/

	//프로잭트 : 경찰관이 용의자 신상 입수 (조서 작성)
	/* 이름, 나이, 몸무게, 키, 죄명
	char name[777];
	int age;
	float weight;
	double hight;
	char guilt[777];
	printf("이름이 어떻게 되시죠? ");
	scanf_s("%s", name, sizeof(name));
	printf("나이는 어떻게 되시죠? ");
	scanf_s("%d", &age);
	printf("몸무게는? ");
	scanf_s("%f", &weight);
	printf("키. ");
	scanf_s("%lf", &hight);
	printf("네 죄를 네가 알렸다!!!!!!");
	scanf_s("%s", guilt, sizeof(guilt));

	printf("죄인 %s은 %d살의 나이로, 몸무게 %.1fkg, 키 %.2lfcm로\n '%s' 에 해당하는 죄를 지었으니!!! 게임 금지형에 처한다!!!!!!!! ", name, age, weight, hight, guilt);
	*/
	
	//'++' 에 대하여
	/*int b = 27;
	printf("%d\n", b++);	
	printf("'b++'을 해준다음 b출력 값 %d\n", b);
	printf("'++b'를 해줬을 때는 바로 더해져서 출력되므로 b값은 %d가 된다\n", ++b);*/

	//for 문 [for(선언; 조건; 실행후 증감)] > 1부터 10까지 출력
	/*for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
	}*/

	//while(조건){} for문은 조건과 선언을 같이 해주지만 while 반복문실행 전에 선언을 해주고 내부에서 증감해줘야함
	//1부터 10까지 출력
	/*int i = 1;
	while (i <= 10) {
		printf("%d\n", i);
		i++;
	}*/
	//do while
	//do {수행문} while(조건);
	/*int i = 1;
	do {
		printf("%d\n", i);
		i++;
	} while (i <= 10);*/

	//2중 반복문(구구단)
	
	/*for (int i=1; i <= 9; i++) {
		for (int j=1; j <= 9; j++) {
			prin1tf("%d X %d = %d\n", i, j, i * j);
			
		}
		
	}*/
	
	/*
	별이 1개부터 5개 까지 별이 출력
	*/
	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/
	//우측 정렬 출력
	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4 - i; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}*/
	/*위와 같은 출력값
	for (int i = 0; i < 5; i++) {
		for (int j = i; j < 4; j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	} */

	//프로잭트 피라미드를 쌓아라(원하는 층수를 입력 받고 ㄷ실행)
/*int floor;

printf("몇층의 피라미드를 쌓을지 말씀하시오 : ");
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
//조건/ 분기
//if else, break, continue, switch

//if else 나이를 구분할 때 미성년자과 성인으로 구분(일반인 : 20세 이상
/*int age;
printf("나이를 입력하시요 : ");
scanf_s("%d",&age);
if (age < 20) {
	printf("미성년자입니다.\n");
}
else {
	printf("성인입니다.\n");
}*/
//if() {} else if(){} 초(8~13) 중(14~16) 고(17~19)로 나눈다면 
/*int age;
printf("당신의 나이를 입력하세요 : ");
scanf_s("%d", &age);
if (age <= 13 && age >= 8)printf("당신은 초등학생입니다.\n");
else if (age >= 14 && age <= 16)printf("당신은 중학생입니다.\n");
else if (age >= 17 && age <= 19)printf("당신은 고등학생입니다. \n");
else printf("당신은 학생이 아니거나 대학생입니다.");*/

//break, continue
//break 1번부터 30번 까지 있는 반에서 1번부터 5번까지 조별 발표를 합니다.
	/*for (int i = 1; i <= 30; i++) {
		if (i >= 6) {
			printf("다른 학생은 대기하세요\n");
			break; }
		printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);

	}*/

//continue : continue 아래의 문장을 수행하지 않고 다음 반복문 실행
//1번 부터 30번 까지 있는 반에서 6번부터 10번까지 조별 발표 진행 7번은 아파서 결석

/*for (int i = 1; i <= 30; i++)
		{
			if (i == 7)
			{
				printf("%d번 학생은 오늘 아파서 결석입니다.\n", i);
				continue;
			}
			if (i <= 10 && i >= 6)
			{
				printf("%d번 학생은 발표준비를 하십시오\n", i);
			}
		}*/

//&&(둘다 만족), ||(둘중 하나만 만족해도 가능)

//랜덤수

//srand(time(NULL)); // 난수 초기화

//int num = rand() % 3 + 1; //0+1 ~ 2+1 = 1 ~ 3 (% : 나누고 남은 나머지)
/*printf("난수초기화 이전.. \n");
		for (int i = 0; i < 10; i++)
		{
			printf("%d ", rand() % 10);
		}
		srand(time(NULL)); //난수 초기화
		printf("\n\n난수 초기화 이후 \n");
		for (int i = 0; i < 10; i++) {
			printf("%d ", rand() % 10);
		}*/

//switch case 가위바위보 구현

//switch(조건에 해당하는 변수)
//{
//case 변수의 값0 : 조건에 해당하는 변수의 값이 case뒤에 있는 변수의 값0과 동일할 때 실행할 문장; break(실행문을 실행하고 탈출);
//case 변수의 값1 : 조건에 해당하는 변수의 값이 case뒤에 있는 변수의 값1과 동일할 때 실행할 문장; break(실행문을 실행하고 탈출);
//case 변수의 값2 : 조건에 해당하는 변수의 값이 case뒤에 있는 변수의 값2과 동일할 때 실행할 문장; break(실행문을 실행하고 탈출);
//defualt : 조건에 해당하는 변수가 없을때 실행되는 문장
//}
//break; 가 없으면 해당하는 조건의 실행문을 실행하고 그 아래의 문장을 다 실행시킨다

/*srand(time(NULL));
 //가위 0 바위 1 보 2

int num = rand() % 3;

switch (num)
{
case 0: printf("가위\n"); break;
case 1: printf("바위\n"); break;
case 2: printf("보\n"); break;
default:printf("몰라요\n");
}*/

//프로잭트 up dowm

/*srand(time(NULL));

int num = rand() % 100 + 1; // 1~100 숫자
printf("뽑은 숫자는 : %d\n", num);
	int answer = 0; // 정답
	int chanse = 5; // 기회

	while (chanse)
	{
		printf("1~100 중에서 정답으로 생각되는 숫자를 입력하시오(남은기회 %d) : ",chanse);
		scanf_s("%d", &answer);
		if (answer > num)
		{
			printf("%d는 정답보다 큰 숫자입니다.\n", answer);
		}
		else if (answer < num)
		{
			printf("%d는 정답보다 작은 숫자입니다.\n", answer);
		}
		else {
			printf("정답입니다!!!!!\n");
			break;
		}
		chanse--;
	}*/






	return 0;

	
} //main

