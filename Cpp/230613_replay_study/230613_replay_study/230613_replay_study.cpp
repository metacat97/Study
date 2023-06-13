#include <iostream>



//void Print_Num(int number);
int change_num(int number)
{

	
	number = 10;
	return number;

}

double add(double a, double b)
{
	
	return a + b;
}
int main()
{

	int num = 7;
	
	      


	// 마지막 바닥의 별이 num개가 출력되는 피라미드를 출력해보자.
	// 별을 num개 만큼 출력한다 
	// 반복할 코드를 안에 넣을 수 있는데 
			  // 반복문 안에 반복문은 

			  // 하루에 2바퀴씩 7일 돌자 

	for (int i = 0; i < num; i++)
	{	
		

		for (int j = 0; j < num; j++)
		{
			printf(" ");
			if (j == i)
			{
				printf("*");
			}
			
		}
		printf("\n");
	}


	
	// 함수 호출자에게 보내줄 값의 자료형 [함수 이름] (코드 실행 시에 필요한 변수들)
/*
	{

		실행할 코드들...
		return 호출자에게 보내줄 값;

	}


*/ 
	//int zero = 4;
	//Print_Num(zero);
	//printf("\n\n");

	//
	//change_num(zero);
	//printf("%d",change_num(zero));

	//함수명 다르게
	//얼리 익시트


	//int num = 123;

	//while (1)
	//{
	//	printf("%d", num % 10);
	//	num /= 10;
	//	
	//	if (num == 0)
	//	{
	//		break;
	//	}
	//}


	//int start_num = 25;
	//int end_num = 53;  

	//for (int i = start_num; i <= end_num; i++)
	//{
	//	if (start_num % 10 == 3 || start_num % 10 == 6 || start_num % 10 == 9)
	//	{

	//	}
	//}

	//해야 할 작업을 분리해서 생각해보면,
	// 작업 쪼개서 새악해보기

	//1. 스타트 부터 끝까지 출력해보기 ===== 10의 자리수가 달라지면 개행
	//2. 박수를 쳐야하는 숫자면 박수를 치고, 안치면 숫자면 그냥 숫자를 출력한다 ====== 정수 n에서 3,6, 9 가 몇 개인지 출력하기 -> 첫쨰 자리 분리 
	// 
	//3. 
	






	/*int array[] = { 6,1,2,6,2 };
	int length = sizeof(array)/sizeof(int);
	int temp = 0;
	int array1[5] = { 0, };

	for (int i = 0; i < 5; i++)
	{
		for (int j = length; j >= 0; j--)
		{
			temp = array1[i];

			array1[j] = temp;
			
		}
	}



	for (int i = 0; i <= 5; i++)
	{
		printf("[%d]",array[i]);
	}*/

//}


//void Print_Num(int number)
//{
//	printf("%d", number);
//	add(2.0, 4);

}


//void method(const int x,)