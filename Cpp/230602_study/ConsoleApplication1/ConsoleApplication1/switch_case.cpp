//������� �����



#include <iostream>
#include <conio.h>


void switch_study();
int main()
{
	/*
switch (���̽� �з��� ��)
{
	case ��1 : ����; break;
	case ��2 : ����; break;
	case ... : ����; break;
	default:  ����; break
 }*/
	switch_study();
}

void switch_study()
{
	//switch / case ��

	char user_input = 0;

	//	int user_input = 0;
	printf("user input : ");
	//	scanf_s("%d", &user_input);
	user_input = _getch();

	switch (user_input)
	{
	case 'a':
		printf("�̰��� 1 \n");
		break;
	case 'b':
		printf("�̰��� 2 \n");
		break;
	case 'c':
		printf("�̰��� 3 \n");
		break;
	default:
		printf("�̰��� 4 \n");
		break;

	}
	printf("Press any key... \n");

	/*
	
	int user_input = 0;
	scanf_s("%d", &user_input);

	switch (user_input%2)
	{
		case (1):
			printf("Ȧ���Դϴ�.");
			break;
		case (0):
			printf("¦���Դϴ�.");
			break;
	}
	
	*/

}