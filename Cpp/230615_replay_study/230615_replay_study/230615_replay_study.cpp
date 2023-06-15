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

	/*
	for (int i = 0; i < 12; i++)
	{
		sum[11] = sum[i] + i;
	}*/

	
	//무한 반복을 도는데 
	//현재 보고있는 곳이  널문자면 멈춰



	//printf("%d",sum[10]);

	char str[] = "Hello world!";
	
	printf("%s", str);

	
	int size = sizeof(str) / sizeof(str[0]);
	printf("%d", size);

	int str_size = sizeof(str) / sizeof(str[0]) - 1;

	for (int i = 0; i < str_size/2 ; i++)
	{
		char temp = str[i];
		str[i] = str[(str_size - 1) - i];
		str[(str_size - 1) - i] = temp;
	}

	//printf("%s", str[-2]);

	printf("%s", str);




	//다차원 배열은 무엇인가  : 
	// 배열을 요소로 가지는 배열입니다.

	//int arr[2][3]; // int [3] 배열을 2개만큼 생성함
	//int arr[2][3][4];// int [3][4] 배열을 2개만큼


	int arr[2][3]
	{
		{1,2,3},
		{4,5,6},

	};


	//int map[10][10];
	//int map_height = sizeof(map) / sizeof(map[0]);
	//int map_height = sizeof(map[0]) / sizeof(map[0][0]);

	//for ()

	//	switch (map[height][width])

	




}

