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
//	//플레이어가 어떤 상태인지 출력해서 보여줄 것 .( 왜 크리티컬인지, 아닌지 알 수 있어야 함)
//	// 대미지도 미리 적어놓기 위해 const로 사용
//	while (true)
//	{
//		printf("Press any key...\n\n");
//		_getch();
//
//
//		printf("1~60까지의 숫자가 나올 시 크리티컬대미지가 발생합니다.\n\n");
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
//			printf("%d 이 나와서 크리티컬 히트 !!!\n \n ",random_d);
//			
//		}
//		else
//		{
//			printf("%d 이 나와서 노멀 히트\n \n  ", random_d);
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
//	srand(time(NULL)); // 이것이 rand() 함수의 키 값을 바꿔주는 함수 
//
//	printf("주사위 프로그램 \n \n");
//	printf("컴퓨터가 뽑은 3개의  주사위 값 -> ");
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
//	printf("프로그램 종료 \n \n ");
//} // sleep_study 
//
