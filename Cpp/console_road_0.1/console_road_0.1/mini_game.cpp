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

//ĳ���� hp ���� ����
const int Player_Hp = 50;
int Player_Attack = 10;




int main()
{

}


// w s a d 'f' ������ �� �Է¹޴� ��
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
//�ܼ� â ȭ�� ����
void control_screen()
{
	//�ܼ� â ũ�� ����
	system("mode con cols=90 lines=40 | title game name ");
	
	/*
	//���� �Ÿ��� Ŀ�� ���ִ� �ý���  �ܿ�� + ���� �ʿ�
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); //�ܼ� �ڵ� ��������
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = 0; //false �Ǵ� 0 : �����
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
	*/
}
//�޴� ������ ��� �Լ� 
int drew_menu()
{
	int x = 37;
	int y = 25;
	control_xy(x - 2, y);
	printf("> ���� ����");
	control_xy(x , y + 1);
	printf("���� ����");
	control_xy(x, y + 2);
	printf("���� ����");
	while (1)
	{
		int user_key_event = control_key();  //Ű �� �޾ƿ���
		switch (user_key_event)
		{
		case UP: //�Էµ� Ű ���� up�� ���

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
//xy ��ǥ�� ���� 
void control_xy(int x, int y)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}


