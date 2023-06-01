#include <iostream>
#include <stdio.h>

/*
//{전방함수 선언
void cal_input();
//}전방함수 선언

//{전역 변수 선언
int num1, num2, num3;
//}전역 변수 선언
*/
/*
//전방 선언
void r_input();

// 전역변수 선언
int r;
float r_cal();
*/

//변수 선언 
//char ch_in;
//전역변수 선언
//void ch_input();

//전역 변수 선언
int u_input;
void user_input();


int main()
{
	/*
	// { 변수 선언부
	int result;
	int num1, num2;
	// } 변수 선언부

	// { 사용자 입력받는 로직
	printf("정수 one: ");
	scanf_s("%d", &num1);
	printf("정수 two: ");
	scanf_s("%d", &num2);
	// } 사용자 입력받는 로직

	// { 실제 연산 로직 / 플러스 연산 
	result = num1 + num2;
	printf("%d + %d = %d \n ", num1, num2 , result);
	// } 실제 연산 로직 / 플러스 연산
	
	// 함수를 여기서 끝내겠다는 의미 /입력부분 따로 출력부분 따로 
	return 0; 
			// main() 가독성 의도를 명확하게
	*/
//--------------------------------------------------------------------------------
	/*
	//{변수 선언부
	int result;
	int num1, num2;


	//{사용자 입력받는 로직
	printf("정수 2개를 입력해주세요 : ");
	scanf_s("%d %d", &num1, &num2);


	//{실제 연산하는 로직
	result = num1 + num2;
	printf("%d + %d = %d 입니다.\n", num1, num2, result);

	return 0;*/
//---------------------------------------------------------------------------------
	/*
	// 중간 점검
	// 정수 3개를 입력 받아서 x + y *z 의 결과를 출력하는 프로그램 작성해보기
	// -입력은 scanf_s 쓰고, 한 라인에서 3개의 입력을 받는다 
	// -함수를 활용한다 
	// -사칙연산 순서에 유의할 것

	//{변수 선언 
	//int num1, num2, num3;
	int result, result_mod;
	//}변수 선언 

	//{입출력 부분 
	//printf("정수 3개를 입력해주세요: ");
	//scanf_s("%d, %d, %d", &num1, &num2, &num3);
	//}입출력 부분 

	//{연산 하는 로직
	//result = num1 + (num2 * num3);
	//printf(" %d + %d * %d = %d 입니다.", num1, num2, num3, result);
	//}연산 하는 로직

	cal_input();
	// 변형 문제 (num1 - num2) * (num2 + num3) * (num3 % num1)

	result_mod = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf(" 계산된 결과는 %d 입니다.", result_mod); */

//---------------------------------------------------------------------------------
	
	/*데이터 타입 사이즈 연습
	char char_value = 'A';					   // 문자 하나를 저장하기 위한 데이터 타입
	short short_value = 10;					  // int 보다 작은 수를 저장하기 위한 데이터 타입
	int int_value = 100;					 // 가장 만만한 수를 저장하기 위한 데이터 타입
	long long_value = 200;					// int가 커져서 이제 잘 안쓰는 데이터 타입
	long long long_long_value = 1000;      // int보다 큰 수를 저장하기 위한 데이터 타입

	// 실수형 데이터 타입들			
	float float_value = 10.1;				  //가장 만만한 실수를 저장하기 위한 데이터 타입
	double double_value = 100.1;			 //float 보다 큰 실수를 저장하기 위한 데이터 타입
	long double long_double_value = 200.1;  //double 보다 큰 실수를 저장하기 위한 데이터 타입

	printf("크기는? %d byte. \n", sizeof(char_value));
	printf("크기는? %d byte. \n", sizeof(short_value));
	printf("크기는? %d byte. \n", sizeof(int_value));
	printf("크기는? %d byte. \n", sizeof(long_value));
	printf("크기는? %d byte. \n", sizeof(long_long_value));

	*/
//---------------------------------------------------------------------------------
	/* 
	//문제. 원의 반지름을 입력 받아서 원의 넓이를 출력하는 프로그램 작성해보기 
	//- 함수를 사용할 것. 전방선언 해 볼 것
	//- 원의 반지름은 정수.
	
	
	//const float PI = 3.141592f;
	
	//{변수 선언
	//int r;
	//float result;
	
	//r_input();
	//printf("반지름을 입력해주세요: ");
	//scanf_s("%d", &r);
	
	//result = (r*r)* PI;
	

// {한 줄로 끝내겠다는 마음
	printf("%.3f", r_cal());
// }한 줄로 끝내겠다는 마음
*/

//---------------------------------------------------------------------------------
	
/* char


char char_value = 'B';

printf("char 출력할 때는%d", char_value);

bool is_same = ('A' == 65);
printf("진짜로 같은가?? %d", is_same);

char some_alphabet = 'D';
bool is_big_alphbet = ('A' <= some_alphabet && some_alphabet <= 'Z');


// 문제 캐릭터 하나를 입력 받아서 해당 문자가 특수문자인지 아닌지 체크해서 알려주는 프로그램 작성해보기
// - 대문자 알파벳 아니고, 소문자 알파벳 아니면 특수문자로 인정
// - 아무거나 입력해볼텐데, 오직 특수문자인 경우에만 인정*/


//char test = '#';
//printf("%d", test);
	/*
    ch_input();
    
	

	('A' <= ch_in && ch_in <= 'Z') ? printf("입력하신 문자는 %c이며 알파벳 대문자입니다.", ch_in) :
	('a' <= ch_in && ch_in <= 'z') ? printf("입력하신 %c는 알파벳 소문자입니다.", ch_in) :
	('0' <= ch_in && ch_in <= '9') ? printf("입력하신 문자 %c는 숫자입니다.", ch_in) :
	printf("입력하신 문자 %c는 특수문자입니다.", ch_in);
	
	//A~Z:	65 ~ 90, a~z 97~122    ,  특수문자 32 ~ 47 ,

	//printf("%d", ch_in);
	*/
//-------------------------------------------------------------------------------------
	/*
	char some_alphabet = '2';
	bool is_big_alphabet = ('A' <= some_alphabet && some_alphabet <= 'Z');
	bool is_small_alphabet = ('a' <= some_alphabet && some_alphabet <= 'z');
	bool in_number = ('0' <= some_alphabet && some_alphabet <= '9');

	// if 시작  
	
	if (is_big_alphabet)
	{
		printf("영어 대문자입니다. \n");
		// if 문은 조건식이 참이면 스코프 안의 내용을 진행하고, 거짓이면 건너뛴다.
	}
	else if (is_small_alphabet)
	{
		printf("영어 소문자입니다.");
	}
	else if (in_number)
	{
		printf("숫자입니다.");
	}
	else
	{
		printf("영어 대문자가 아닙니다.\n ");
		// 위의 조건식에서 참이 아닌, 다른 모든 경우 스코프 안의 내용을 진행한다.
	}
	
	*/	
//-------------------------------------------------------------------------------------
	//반복문 시작
//printf("Hello world! \n");
/*
int loop_c = 1;

while (10>= loop_c)
{
	printf("Hello world! 몇 번째 돌고 있는지? %d\n", loop_c);
	loop_c += 1;
}
*/

	//반복문 문제
//유저에게 정사각형 사이즈를 입력 받아서 '*'로 출력하는 프로그램 만들기
//- 유저 입력은 3~10 사이로만 입력한다

/*
	출력 예시
	* * *	* * * *		* * * * *		* * * * * *		* * * * * * *	* * * * * * * *		* * * * * * * * *		* * * * * * * * * *
	* * *	* * * *		* * * * *		* * * * * *		* * * * * * *	* * * * * * * *		* * * * * * * * *		* * * * * * * * * *
	* * *	* * * *		* * * * *		* * * * * *		* * * * * * *	* * * * * * * *		* * * * * * * * *		* * * * * * * * * *
			* * * *		* * * * *		* * * * * *		* * * * * * *	* * * * * * * *		* * * * * * * * *		* * * * * * * * * *
						* * * * *		* * * * * *		* * * * * * *	* * * * * * * *		* * * * * * * * *		* * * * * * * * * *
										* * * * * *		* * * * * * *	* * * * * * * *		* * * * * * * * *		* * * * * * * * * *
														* * * * * * *	* * * * * * * *		* * * * * * * * *		* * * * * * * * * *
																		* * * * * * * *		* * * * * * * * *		* * * * * * * * * *
																							* * * * * * * * *		* * * * * * * * * *
																													* * * * * * * * * *
*/





user_input();
	
int user_count_x = 0;
int user_count_y = 0;
// 나중에 추가할 것 = 3 ~ 10 까지의 범위를 입력하고 그 외에는 잘못입력했다고 출력 

	while (user_count_x <= u_input)
	{
		//수정 후
		if (user_count_y == u_input)
		{
			return 0;
		}

		printf("* ");
		user_count_x += 1;
		if (user_count_x == u_input)
		{
			printf("\n");
			user_count_x = 0;
			user_count_y += 1;
		}
		
		//수정 전
		/*else if (user_check_count == u_input)
		{
			return 0;
		}*/

	}


	return 0;


}


//{입력받는 함수
void user_input()
{
	printf("3 ~ 10 의 숫자를 입력해주세요:");
	scanf_s("%d", &u_input);
}
/*
//문자 입력받는 함수
void ch_input()
{
	printf("특수문자인지 아닌지 판단해드립니다._______");
	scanf_s("%c", &ch_in);
}
*/



//--------------------------------------------
/*
void cal_input()
{
	printf("정수 3개를 입력해주세요: ");
	scanf_s("%d, %d, %d", &num1, &num2, &num3);
}
*/
/*
//{입력받는 함수
void r_input()
{
	printf("반지름을 입력해주세요: ");
	scanf_s("%d", &r);

}
//입력받는 함수}


//입력받는 함수를 이용하여 계산하는 함수
float r_cal()
{
	const float PI = 3.141592f;
	r_input();
	return (r * r) * PI;
}
//입력받는 함수를 이용하여 계산하는 함수
*/

//---------------------------------------------
