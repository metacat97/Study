#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


//���߿� �ٽ� �߰��ؾ���

void random_study();

int main()
{
	//random_study();


	// Ȧ¦ ����
	/*��ǻ�Ͱ� �ֻ����� 2�� ������
	  �÷��̾�� ���ڸ� �̸��� �� �ִ�.  ���� Ȧ�� ¦�� ��� 
	  �÷����� ���� �̸� ���� �÷��̾ Ȧ ¦ ����
	*/


	//���� �� ��� �Լ� 
	//���� ����
	
	
	int random_num1, random_num2 = 0;
	int user_input = '0';
	


	//Ű ���� �������ִ� ����
	srand(time(NULL));
	
	// for�� ����
	/*for (int i = 0; i < 2; i++)
	{
		dice = (rand() % 6) + 1;
		printf("%d\n", dice);
	}*/
	random_num1 = (rand() % 6) + 1;
	random_num2 = (rand() % 6) + 1;

	printf("[%d] ���� Ȯ�ο� \n \n ", random_num1);
	/*if (check_hol_1 )
	{
		check_hol = 
	}*/


	printf("Ȧ�� 1, ¦�� 2�� �����ּ���: ");
	user_input = _getch();


	/*if (user_input == )
	{
		check_hol
	}*/


	/*
	if ((random_num1 % 2) == 1)
	{
		printf("%d : Ȧ��\n", random_num1);
	}
	else 
	{
		printf("%d : ¦��\n", random_num1);
	}
	

	if ((random_num2 % 2) == 1)
	{
		printf("%d : Ȧ��\n", random_num2);
	}
	else  
	{
		printf("%d : ¦��\n", random_num2);
	}*/



}

void random_study()
{

	//���α׷��� ������ ���� ��ġ�� �ʴ¤�

	
	//���⼭ Ű ���� �ٲ� ����
	//srand(5); // �̰��� rand() �Լ��� Ű ���� �ټ�
	int random_num1;
		srand(time(NULL)); //�̰��� rand() �Լ��� Ű ���� �ٲ��ִ� �Լ� 

		random_num1 = ((rand()%6) + 1) ;

	
	printf("Random number?? %d \n", random_num1);
}