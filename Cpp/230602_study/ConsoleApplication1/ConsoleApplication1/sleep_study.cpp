//#include <iostream>
//#include <conio.h>
//#include <windows.h>
//#include <time.h>
//#include <stdlib.h>
//
//void sleep_study();
//void crit_hit();
//int main()
//{
//	int random_damage = 100;
//	srand(time(NULL));
//	//�÷��̾ � �������� ����ؼ� ������ �� .( �� ũ��Ƽ������, �ƴ��� �� �� �־�� ��)
//	// ������� �̸� ������� ���� const�� ���
//	while (true)
//	{
//		printf("Press any key...\n\n");
//		_getch();
//
//
//		printf("1~60������ ���ڰ� ���� �� ũ��Ƽ�ô������ �߻��մϴ�.\n\n");
//		//printf("%d   ", (rand() % random_damage) + 1);
//
//		int random_d = 0;
//		random_d = ((rand() % random_damage) + 1);
//
//		int cri = random_d >= 1 && random_d <= 60;
//
//		if (cri == 1)
//		{
//
//			printf("%d �� ���ͼ� ũ��Ƽ�� ��Ʈ !!!\n \n ",random_d);
//			
//		}
//		else
//		{
//			printf("%d �� ���ͼ� ��� ��Ʈ\n \n  ", random_d);
//		}
//	}
//}
//
//
//
//
//
//
//
//void crit_hit()
//{
//	const int nor_dam = 100;
//	
//
//
//
//
//}
//
//
////sleep_study
//void sleep_study()
//{
//	int random_number = 0;
//	const int max_dice_value = 6;
//	srand(time(NULL)); // �̰��� rand() �Լ��� Ű ���� �ٲ��ִ� �Լ� 
//
//	printf("�ֻ��� ���α׷� \n \n");
//	printf("��ǻ�Ͱ� ���� 3����  �ֻ��� �� -> ");
//	for (int i = 0; i < 3; i++)
//	{
//		Sleep(1000);
//		random_number = (rand() % max_dice_value) + 1;
//		printf("%d ", random_number);
//
//	}
//
//	Sleep(1000);
//	printf("\n \n");
//	printf("���α׷� ���� \n \n ");
//} // sleep_study 
//
