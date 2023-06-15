// 230615_replay_study.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	int result = 0;
	int sum[11];

	/*for (int i = 0; i < 11; i++)
	{
		sum += i ;

		result = sum[i] + sum[i+1];
	}*/

	
	for (int i = 0; i < 11; i++)
	{
		sum[11] = sum[i] + sum[i + 1];
	}

	




}

