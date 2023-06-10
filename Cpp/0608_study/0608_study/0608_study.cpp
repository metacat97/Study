// 0608_study.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>

void study001();
void ArrayFunc(int* ptrArray, int array_size);
void ArrayFunc2(int array_[],int array_size);
void choice_sort();
void shuffleonce(int* firstnumber, int* secondnumber);
void  bubble_sort();
void insert_sort();
void study002();
void work002();
void shuffleonce(int* firstnumber, int* secondnumber);

int main()
{
	//study001();

	//choice_sort();
	//bubble_sort();
	//insert_sort();

//	study002();
	


}



void shuffleonce(int* firstnumber, int* secondnumber)
{
	int temp = 0;
	temp = *firstnumber;
	*firstnumber = *secondnumber;
	*secondnumber = temp;
}

void work002()
{
	//ㅅtest
	char char_[25] = { 0, };
	char char2_[5][5] = { 0, };
	char u_in = _getch();
	int u_x = 2;
	int u_y = 2;
	//맵과 초기 위치 출력

	//for (int i = 0; i < 25; i++)
	//{
	//	char_[i] = '*';
	//}

	while (1)
	{

		if (u_in == 'w' || u_in == 'W')
		{
			if (u_y > 0)
			{
				u_y--;
			}
			else
			{
				u_y = 0;
			}
		}
		else if (u_in == 's' || u_in == 'S')
		{
			//u_x++;
			if (u_y < 4)
			{
				u_y++;
			}
			else
			{
				printf("sss");

				u_y = 4;

			}
		}
		else if (u_in == 'a' || u_in == 'A')
		{
			//u_y--;
			if (u_x > 0)
			{
				u_x--;
			}
			else
			{
				u_x = 0;
				printf("");
			}
		}
		else if (u_in == 'd' || u_in == 'D')
		{
			//u_y++;
			if (u_x < 4)
			{
				u_x++;
			}
			else
			{
				u_x = 4;
			}
		}


		for (int y = 0; y < 5; y++)
		{
			for (int x = 0; x < 5; x++)
			{
				char2_[y][x] = '*';

				if (y == u_y && x == u_x)
				{
					char2_[y][x] = '0';
				}
			}

		}


		system("cls");
		for (int y = 0; y < 5; y++)
		{
			for (int x = 0; x < 5; x++)
			{
				printf("%c ", char2_[y][x]);
			}
			printf("\n");
		}
		u_in = _getch();
	}
}



void study002()
{
	//다차원 배열
	char char_[25] = {0, };
	char char2_[5][5] ={0, };
	char u_in = _getch();
	int u_x = 2;
	int u_y = 2;
	//맵과 초기 위치 출력
	
	//for (int i = 0; i < 25; i++)
	//{
	//	char_[i] = '*';
	//}
	
	while (1)
	{
		
		if (u_in == 'w' || u_in == 'W')
		{
			if (u_y > 0)
			{
				u_y--;
			}
			else  
			{
				u_y = 0;
			}
		}
		else if (u_in == 's' || u_in == 'S')
		{
			//u_x++;
			if (u_y < 4)
			{
				u_y++;
			}
			else 
			{
				printf("sss");

				u_y = 4;

			}
		}
		else if (u_in == 'a' || u_in == 'A')
		{
			//u_y--;
			if (u_x > 0)
			{
				u_x--;
			}
			else 
			{
				u_x = 0;
				printf("");
			}
		}
		else if (u_in == 'd' || u_in == 'D')
		{
			//u_y++;
			if (u_x < 4)
			{
				u_x++;
			}
			else 
			{
				u_x = 4;
			}
		}


		for (int y = 0; y < 5; y++)
		{
			for (int x = 0; x < 5; x++)
			{
				char2_[y][x] = '*';

				if (y == u_y && x == u_x)
				{
					char2_[y][x] = '0';
				}
			}

		}
		

		system("cls");
		for (int y = 0; y < 5; y++)
		{
			for (int x = 0; x < 5; x++)
			{
				printf("%c ", char2_[y][x]);
			}
			printf("\n");
		}
		u_in = _getch();
	}

	//맵과 초기 위치 출력



	//출력부분
	/*for (int i = 0; i < 25; i++)
	{
		printf("%c ", char_[i]);

		if (i % 5 == 4)
		{
			printf("\n");

		}
	}*/

	

}

void shuffleonce(int* firstnumber, int* secondnumber)
{
	int temp = 0;
	temp = *firstnumber;
	*firstnumber = *secondnumber;
	*secondnumber = temp;
}	

void insert_sort()
{
	int u_input[5] = { 21, 59, 36, 99, 17 }; //5개의 값을 가지고 있는 배열 선언


	for (int i = 0; i < 5; i++)
	{
		int target = i;
		for (int j = target-1; j >= 0; j--)
		{
			printf("i = [%d] i배열=[%d]\nj = [%d] j 배열 = [%d]\n\n", i, u_input[i],j,u_input[j]);
			
			if (u_input[target] < u_input[j])
			{
				
				shuffleonce(&u_input[target], &u_input[j]);
				//target--;
				/*for (int i = 0; i < 5; i++)
				{
					printf("[%d] ", u_input[i]);
				}
				printf("\n");*/
			}
			
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", u_input[i]);
	}

}


void bubble_sort()
{
	int u_input[5] = { 21, 59, 36, 99, 17 }; //5개의 값을 가지고 있는 배열 선언

	

	for (int i = sizeof(u_input) / sizeof(int); i > 0; i--)
	{
		for (int j = 0; j < 4; j++)
		{
			if (u_input[j] > u_input[j + 1])
			{
				shuffleonce(&u_input[j], &u_input[j + 1]);
			}
		}
	}
		


	for (int i = 0; i < 5; i++)
	{
		printf("%d ", u_input[i]);
	}
}



void choice_sort()
{
	int u_input[5] = { 21, 59, 36, 99, 17 }; //5개의 값을 가지고 있는 배열 선언

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (u_input[i] < u_input[j])
			{
				shuffleonce(&u_input[i], &u_input[j]);
			}
		}

	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", u_input[i]);
	}

}


void study001()
{
	int numbers[10] = { 0, };
	for (int i = 0; i < 10; i++)
	{
		numbers[i] = i * 10;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf(" \n");

	int* ptr_number = &numbers[2];

	printf("3번째 자리에 있는 값 + 1 - > %d \n", (*ptr_number) + 1); // int 정수 값 만큼 4바이트 이동해서 다음 배열의 주소 값이 나옴 역참조 
	printf("numbers가 들고 있는 값 - > %p \n", numbers);
	printf("numbers[0] 의 주소값 - > %p \n", &numbers[0]);

	// ArrayFunc(numbers, 10);
	ArrayFunc2(numbers, 10);
}



void ArrayFunc2(int array_[],int array_size)
{
	printf("함수에서 찍어 본 numbers의 size : %d \n", sizeof(array_));
	for (int i = 0; i < sizeof(array_); i++)
	{
		printf("array[%d]의 값 : %d \n", i, array_[i]);
	}
}



void ArrayFunc(int* ptrArray, int array_size) //int arraysize 로 넘겨 줘야 함 
{
	//배열을 포인터로 줄 수 있다 .
	// 대신 사이즈를 지정해줘야 한다 .
	for (int i = 0; i < array_size; i++)
	{
	printf("ptrArray[%d]  역참조 값: %d \n",i  ,*(ptrArray+i));

	}
	//포인터를 사용할거면 크기를 정확하게 사용해야 한다 .

	//printf("ptrarray + 1 주소의 역참조 값 :%d \n", *(ptrArray + 9));
}