
#include <iostream>
#include <conio.h>

void Desc003();

int main()
{


	Desc003();



}


void Desc003()
{
	int user_input = -1;
	printf("원하는 크기만큼 배열을 만들겠음. 크기를 입력하시오 : ");
	scanf_s("%d", &user_input);



	// new 동적할당
	int numbers[10] = { 0, };
	int* numbers2 = new int[user_input];

	for (int i = 0; i < user_input; i++)
	{
		numbers2[i] = i + 1;
	}
	for (int i = 0; i < user_input; i++)
	{
		printf("i값 %d\n", numbers2[i]);

	}
	printf("\n\n");
	//프로그램 종료시에 해줘야 힙에서 삭제됨 
	delete[] numbers2;
}

//void Desc002()
//{
//
//	//다차원 배열
//	char char_[25] = { 0, };
//	char char2_[5][5] = { 0, };
//	
//	
//}