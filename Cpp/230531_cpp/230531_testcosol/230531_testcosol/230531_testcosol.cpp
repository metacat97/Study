// 230531_testcosol.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int Profile(int age1)
{
	printf("당신의 이름은  김형준이고, 전화번호는 010-0000-0000 당신의 나이는 %d 입니다. ", age1);
	return age1;
}

int CritHit(int normal)
{
	
	float Cri = normal * 1.5;
	
	printf("크리티컬 히트 %.0f", Cri);
	 
	return normal * 1.5;

}

int result = 0;



int Sum_(int num1, int num2)
{
	result = num1 + num2;
	return result;
}
int Sub_(int num1, int num2)
{
	result = num1 - num2;
	return result;
}
int Mul_(int num1, int num2)
{
	result = num1 * num2;
	return result;
}
int Div_(int num1, int num2)
{
	result = num1 / num2;
	return result;
}
void Calcul(int num1, int num2)
{
	printf("%d 더해진 값입니다.\n", num1 + num2);
	printf("%d 뺀 값입니다. \n", num1 - num2);
	printf("%d 곱해진 값입니다.\n", num1 * num2);
	printf("%d 나눠진 값입니다.\n",num1 / num2);
	printf("%d 나머지 값입니다.\n",num1 % num2);
	
}

int Healling(int heal)
{
	// 힐량은 어느 수치를 받더라도  50을 넘기면 안됨 

	// 즉 어떤 계산을 하더라도 50이 되도록 하면 되는건데 
	// 힐량은 1~100 까지 받을 수 있다고 생각하자 .
	// 100을 받았을 때 =     현재 체력 20  + 100 = 120   120을 50으로 만들려면  - 70이 필요하다 
	// 10을 받았을 때 =   현재 체력 20 + 10 = 30  30을 50으로 만들려면  + 20이 필요하고 

	// 다시 처음으로 50만 만들면 된다 .
	
	int MaxHP = 50;
	int CurrentHp = 20;
	int NHP = 0;

	NHP = ((CurrentHp + heal) < MaxHP) ? CurrentHp + heal : MaxHP;
	printf("현재 체력%d, 최대 체력 %d,받은 힐량%d , 치료 후 체력 %d ", CurrentHp, MaxHP, heal, NHP);
	return NHP;
}


int main()
{
   
	//profile(27);


	//int number = 10;  // intger가 정수. 그러니 정수를 저장하기 위한 데이터 타입으로 줄임말인 int를 썼다

	//int number2 = 0.6;  // 출력 결과 0

	//float number3 = 1.6;

	//CritHit(100);

	//-------------------------------------------------------------------------------------

	//사칙연산
	/*int number = 0;

	printf("number 변수를 보여주자 :%d \n \n", number);
	
	int num1 = 10; 
	int num2 = 2;

	printf("%d + %d = %d \n", num1, num2, num1 + num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d * %d = %d \n", num1, num2, num1 * num2);
	printf("%d / %d = %d \n", num1, num2, num1 / num2);
	printf("%d %% %d = %d \n", num1, num2, num1 % num2);*/

	
	//printf("%d\n",Healling(701));


	//Calcul(65, 10);

	//--------------------------------------------------------------------
	
	

	//int num1 = 10;
	//int num2 = 12;
	//int result = 0;

	//result = result + (num1 + num2);
	//result += (num1 + num2);

	//printf("num1 : %d \n", num1++);
	//printf("num1 : %d \n", ++num1);


	//int someNumber = 0;
	//someNumber = someNumber++;
	//printf("%d\n", someNumber);   // C++ 과 C# 값이 다르다 .


	//printf("%d + %d = %d \n", num1, num2, result);
	//printf("%d - %d = %d \n", num1, num2, num1 - num2);
	//printf("%d * %d = %d \n", num1, num2, num1 * num2);
	//printf("%d / %d = %d \n", num1, num2, num1 / num2);
	//printf("%d %% %d = %d \n", num1, num2, num1 % num2);

	//Healling(50);
	//---------------------------------------------------------
	/*
	int result1 = 0;
	int result2 = 0;
	int result3 = 0;*/

	//int num1 = 10;
	//int num2 = 12;

	//int result4 = 0;
	//int result5 = 0;
	//int result6 = 0;

	////result1 = num1 != num2;
	////result2 = num1 <= num2;
	////result3 = num1 > num2;
	////

	//result4 = ((num1 == 10) && (num2 == 12));
	//result5 = ((num1 <12) || (num2 > 12));
	//result6 = (!num1);


	///*printf("%d \n", result1);
	//printf("%d \n", result2);
	//printf("%d \n", result3);*/

	//printf("사%d \n", result4);
	//printf("오%d \n", result5);
	//printf("윳%d \n", result6);

	////장비 , 퀘스트 조건등 여러가지 


	////--------------------------

	//int age = 15;
	//bool boolResult;

	//boolResult = (age < 20) ? true : false;
	//printf("Bool result는 어떤 값? %d \n \n", boolResult);

	//
	//Healling(200); //삼항연산자 사용


	////---------------------------------------------------------

	//printf("숫자 값을 입력해주세요 -->");

	//int inputNumber = 0;
	//scanf_s("%d", &inputNumber);

	//printf("Input number 의 값은? %d", inputNumber);



	//가위 바위 보 함수 만들기 플레이어는 1,2,3 중에 하나를 입력받는다 

	printf("가위는 1, 바위는 2, 보는 3 입니다 . 하나를 입력해주세요-->");
	int inputNumber = 0;

	scanf_s("%d", &inputNumber);

	int user = inputNumber;
	int com = 2;
	bool result;

	result = (inputNumber == 3) ? printf("승리!!") : (inputNumber == 2) ? printf("비김") : printf("패배");

	
	
	

}

//C++ 에서 main 함수는 무조건 있어야 한다 .
//프로그램은 main 함수에서부터 시작한다.

//-------------------------------------------------------------------------------------------------



