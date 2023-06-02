#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


//나중에 다시 추가해야함

void random_study();

int main()
{
	//random_study();


	// 홀짝 게임
	/*컴퓨터가 주사위를 2번 굴린다
	  플레이어는 숫자를 미리볼 수 있다.  총합 홀수 짝수 출력 
	  플러에어 숫자 미리 못봄 플레이어가 홀 짝 맞춤
	*/


	//랜덤 값 출력 함수 
	//변수 선언
	
	
	int random_num1, random_num2 = 0;
	int user_input = '0';
	


	//키 값을 변경해주는 연산
	srand(time(NULL));
	
	// for문 연산
	/*for (int i = 0; i < 2; i++)
	{
		dice = (rand() % 6) + 1;
		printf("%d\n", dice);
	}*/
	random_num1 = (rand() % 6) + 1;
	random_num2 = (rand() % 6) + 1;

	printf("[%d] 숫자 확인용 \n \n ", random_num1);
	/*if (check_hol_1 )
	{
		check_hol = 
	}*/


	printf("홀은 1, 짝은 2를 눌러주세요: ");
	user_input = _getch();


	/*if (user_input == )
	{
		check_hol
	}*/


	/*
	if ((random_num1 % 2) == 1)
	{
		printf("%d : 홀수\n", random_num1);
	}
	else 
	{
		printf("%d : 짝수\n", random_num1);
	}
	

	if ((random_num2 % 2) == 1)
	{
		printf("%d : 홀수\n", random_num2);
	}
	else  
	{
		printf("%d : 짝수\n", random_num2);
	}*/



}

void random_study()
{

	//프로그래밍 적으로 절대 겹치지 않는ㄴ

	
	//여기서 키 값을 바꿀 예정
	//srand(5); // 이것이 rand() 함수의 키 값을 바수
	int random_num1;
		srand(time(NULL)); //이것이 rand() 함수의 키 값을 바꿔주는 함수 

		random_num1 = ((rand()%6) + 1) ;

	
	printf("Random number?? %d \n", random_num1);
}