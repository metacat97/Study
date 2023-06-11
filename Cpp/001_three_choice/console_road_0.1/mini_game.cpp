#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4

//캐릭터 hp 변수 선언
const int Player_Hp = 50;
int Player_Attack = 10;




int main()
{

}


// w s a d 'f' 눌렀을 때 입력받는 것
int control_key()
{
	char user_key = _getch();
	if (user_key == 'w' || user_key == 'W')
	{
		return UP;
	}
	else if (user_key == 's' || user_key == 'S')
	{
		return DOWN;
	}
	else if (user_key == 'a' || user_key == 'A')
	{
		return DOWN;
	}
	else if (user_key == 'd' || user_key == 'D')
	{
		return DOWN;
	}
	else if (user_key == 'f' || user_key == 'F')
	{
		return SUBMIT;
	}
	
}
//콘솔 창 화면 제어
void control_screen()
{
	//콘솔 창 크기 제한
	system("mode con cols=90 lines=40 | title game name ");
	
	/*
	//깜박 거리는 커서 없애는 시스템  외우기 + 공부 필요
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); //콘솔 핸들 가져오기
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = 0; //false 또는 0 : 숨기기
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
	*/
}
//메뉴 선택지 출력 함수 
int drew_menu()
{
	int x = 37;
	int y = 25;
	control_xy(x - 2, y);
	printf("> 게임 시작");
	control_xy(x , y + 1);
	printf("게임 정보");
	control_xy(x, y + 2);
	printf("게임 종료");
	while (1)
	{
		int user_key_event = control_key();  //키 값 받아오기
		switch (user_key_event)
		{
		case UP: //입력된 키 값이 up인 경우

			if (y > 25)
			{
				control_xy(x - 2, y);
				printf(" ");
				control_xy(x - 2, y -= 1);
				printf(">");
			}
			break;


		case DOWN:

			if (y < 27)
			{
				control_xy(x - 2, y);
				printf(" ");
				control_xy(x - 2, y += 1);
				printf(">");
			}
			break;


		case SUBMIT:
			return y - 25;


		}
	}

}
//xy 좌표값 제어 
void control_xy(int x, int y)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}


