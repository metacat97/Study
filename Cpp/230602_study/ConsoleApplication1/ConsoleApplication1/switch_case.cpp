//헤더파일 선언부



#include <iostream>
#include <conio.h>


void switch_study();
int main()
{
	/*
switch (케이스 분류할 값)
{
	case 값1 : 문장; break;
	case 값2 : 문장; break;
	case ... : 문장; break;
	default:  문장; break
 }*/
	switch_study();
}

void switch_study()
{
	//switch / case 문

	char user_input = 0;

	//	int user_input = 0;
	printf("user input : ");
	//	scanf_s("%d", &user_input);
	user_input = _getch();

	switch (user_input)
	{
	case 'a':
		printf("이것은 1 \n");
		break;
	case 'b':
		printf("이것은 2 \n");
		break;
	case 'c':
		printf("이것은 3 \n");
		break;
	default:
		printf("이것은 4 \n");
		break;

	}
	printf("Press any key... \n");

	/*
	
	int user_input = 0;
	scanf_s("%d", &user_input);

	switch (user_input%2)
	{
		case (1):
			printf("홀수입니다.");
			break;
		case (0):
			printf("짝수입니다.");
			break;
	}
	
	*/

}