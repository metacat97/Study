#include <iostream>
#include <stdio.h>

//	보이드 생략 가능


//함수를 만들어보자

//
void MyNewPrint(int number)
{
	// 몸통
	printf("입력 값은 %d 입니다.\n", number);

}

int TwoSum(int num1, int num2)
{
	printf("입력값은 %d, %d 입니다.", num1, num2);

	return num1 + num2;
}

int ThreeMUl(int num1, int num2, int num3)
{
	printf("입력값은 %d, %d, %d 입니다.", num1, num2, num3);

	return num1 * num2 * num3;
}

/*int MSMtest(int num1, int num2, int num3)
{
	
	printf("%d는 세수의 곱이고, %d는 두 수의 합니다", ThreeMUl(num1, num2, num3),TwoSum(num1,num2));
	
	
}
*/


int main()
{
	int number = 10;
	int num = 12;
	std::cout << "Hello world!\n";
	printf("Hello World!\n");
	
	printf("hello %d\n", number - num);
	
	// shif + alt 다중 입력
	/*
	\n  =  이스케이프 시퀀스 
	
	특수문자 중에서 \ 와 조합해서 쓰는 특수문자를 이스케이프 시퀸스라고 한다 .
	
	
	
	*/
	printf("\n\n\n\n "); 
	MyNewPrint(3); // 실제로 함수를 사용하는 줄에서 함수를 부른다.(call)


	// 이번엔 인자를 여러개 받는 함수를 만들어봤습니다.

	printf("두 수의 합은 %d 입니다.\n\n", TwoSum(160, 50));

	printf("세 수의 곱은 %d 입니다.", ThreeMUl(10, 5, 7));

	//MSMtest(10, 10, 10);

	return 0; 

	//메인함수는 이상이 없고 반환하게
	
}