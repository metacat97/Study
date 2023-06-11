#include <iostream>
#include <conio.h>


void puzzle();
void swap1(char* firstnumber, char* secondnumber);
void shuffle();

int main()
{
	
	puzzle();

	//shuffle();

}

void puzzle()
{
	

	char char_[25] = { 0, };
	char char2_[5][5] = { 0, };
	int setup_number = 0;
	
// 퍼즐 범위 입력값 받기
	printf("3~6 의 숫자를 입력해주세요\n===>");
	scanf_s("%d", &setup_number);


// 출력 부분
	printf("press any key");
	char u_in = _getch();


// 입력값  초기위치 설정 
	int u_x = setup_number / 2;
	int u_y = setup_number / 2;

// 배열의 입력값 주기 
	for (int y = 0; y < setup_number; y++)
	{
		for (int x = 0; x < setup_number; x++)
		{
			char2_[y][x] = (y * setup_number) + (x + 1);
			if (y == u_y && x == u_x)
			{
				char2_[y][x] = 0;
			}
		}
		
	}



	// 값이 0이면 공백 칸으로 보이게끔 해주는	
	if (char2_[u_x][u_y] = 0)
	{
		printf("[    ]");
	}

// 셔플넣어야 
	const int shufflecount = 100;
	srand(time(NULL));

	int randomIdx1, randomIdx2, randomIdx3, randomIdx4 = 0;


	for (int i = 0; i < shufflecount; i++)
	{
		randomIdx1 = rand() % setup_number;
		randomIdx2 = rand() % setup_number;
		randomIdx3 = rand() % setup_number;
		randomIdx4 = rand() % setup_number;
		swap1(&char2_[randomIdx1][randomIdx2], &char2_[randomIdx3][randomIdx4]);
		
	}

	

	/*for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			char2_[y][x] = (y*5) +(x+1);

			if (y == u_y && x == u_x)
			{
				char2_[y][x] = 0;
			}
		}

	}*/

	

	while (1)
	{

		if (u_in == 'w' || u_in == 'W')
		{
			if (u_y > 0)
			{
				
				swap1(&char2_[u_y][u_x], &char2_[u_y - 1][u_x]);
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
			if (u_y < setup_number-1)
			{
				swap1(&char2_[u_y][u_x], &char2_[u_y + 1][u_x]);
				u_y++;
			}
			else
			{
				

				u_y = setup_number-1;

			}
		}
		else if (u_in == 'a' || u_in == 'A')
		{
			//u_y--;
			if (u_x > 0)
			{
				swap1(&char2_[u_y][u_x], &char2_[u_y][u_x - 1]);
				u_x--;
			}
			else
			{
				u_x = 0;
				
			}
		}
		else if (u_in == 'd' || u_in == 'D')
		{
			//u_y++;
			if (u_x < setup_number - 1)
			{
				swap1(&char2_[u_y][u_x], &char2_[u_y][u_x +1]);
				u_x++;

			}
			else
			{
				u_x = setup_number - 1;
			}
		}
		else if (u_in == 'q' || u_in == 'D')
		{
			break;
		}
		




		system("cls");
		for (int y = 0; y < setup_number; y++)
		{
			for (int x = 0; x < setup_number; x++)
			{
				printf("   [  %d  ]   ", char2_[y][x]);	
				
			}
			printf("\n\n");
		}
		u_in = _getch();
	}
}

void swap1(char* firstnumber, char* secondnumber)
{
	int temp = 0;
	temp = *firstnumber;
	*firstnumber = *secondnumber;
	*secondnumber = temp;
}



void shuffle()
{

	////셔플로직
	//const int shufflecount = 100;
	//srand(time(NULL));

	//int randomIdx1, randomIdx2 = 0;


	//for (int i = 0; i < shufflecount; i++)
	//{
	//	randomIdx1 = rand() % 25;
	//	randomIdx2 = rand() % 25;
	//	swap1(&numbers[randomIdx1], &numbers[randomIdx2]);
	//}


}