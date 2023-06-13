#include <iostream>



void Print_Num(int number);
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

	
	// 함수 호출자에게 보내줄 값의 자료형 [함수 이름] (코드 실행 시에 필요한 변수들)
/*
	{

		실행할 코드들...
		return 호출자에게 보내줄 값;

	}


*/ 
	int zero = 4;
	Print_Num(zero);
	printf("\n\n");

	
	change_num(zero);
	printf("%d",change_num(zero));

	//함수명 다르게
	//얼리 익시트
}

void Print_Num(int number)
{
	printf("%d", number);
	add(2.0, 4);
}


//void method(const int x, )