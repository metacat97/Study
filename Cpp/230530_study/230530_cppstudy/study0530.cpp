#include <iostream>
#include <stdio.h>

//	���̵� ���� ����


//�Լ��� ������

//
void MyNewPrint(int number)
{
	// ����
	printf("�Է� ���� %d �Դϴ�.\n", number);

}

int TwoSum(int num1, int num2)
{
	printf("�Է°��� %d, %d �Դϴ�.", num1, num2);

	return num1 + num2;
}

int ThreeMUl(int num1, int num2, int num3)
{
	printf("�Է°��� %d, %d, %d �Դϴ�.", num1, num2, num3);

	return num1 * num2 * num3;
}

/*int MSMtest(int num1, int num2, int num3)
{
	
	printf("%d�� ������ ���̰�, %d�� �� ���� �մϴ�", ThreeMUl(num1, num2, num3),TwoSum(num1,num2));
	
	
}
*/


int main()
{
	int number = 10;
	int num = 12;
	std::cout << "Hello world!\n";
	printf("Hello World!\n");
	
	printf("hello %d\n", number - num);
	
	// shif + alt ���� �Է�
	/*
	\n  =  �̽������� ������ 
	
	Ư������ �߿��� \ �� �����ؼ� ���� Ư�����ڸ� �̽������� ��������� �Ѵ� .
	
	
	
	*/
	printf("\n\n\n\n "); 
	MyNewPrint(3); // ������ �Լ��� ����ϴ� �ٿ��� �Լ��� �θ���.(call)


	// �̹��� ���ڸ� ������ �޴� �Լ��� �����ý��ϴ�.

	printf("�� ���� ���� %d �Դϴ�.\n\n", TwoSum(160, 50));

	printf("�� ���� ���� %d �Դϴ�.", ThreeMUl(10, 5, 7));

	//MSMtest(10, 10, 10);

	return 0; 

	//�����Լ��� �̻��� ���� ��ȯ�ϰ�
	
}