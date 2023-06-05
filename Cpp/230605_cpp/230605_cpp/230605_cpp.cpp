

#include <iostream>






//void description01(int number);
//void AddOne(int* localNumber1, int* localNummber2);
//void Description002();
void Description003();

int main()
{
    int main_number1 = 0;
    int main_number2 = 0;
    //AddOne(&main_number1, &main_number2);
   // description001(10);
   // Description003();
    char board[5] = { 0, };

    //{board 초기화 하는 로직
    for (int i = 0; i < 5; i++)
    {
        board[i] = '*';
        if (i == 0)
        {
            board[i] = '0';
        }
        else if (i == 1)
        {
            board[i + 1] = '0';
        }
    }
    //}board 초기화 하는 로직
    // {board 출력하는 로직
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", board[i]);

        for (int j = 0; j < 5; j++)
        if (i == 0)
        {
            printf("%c ", board[i + 1]);
        }
    }


}

void Description003()
{
    // 배열이란 무엇인지 실습
    //int numbers[5]; //5개의 변수를 선언한 것


    // numbers[0] = 100;
    // numbers[1] = 200;
    // numbers[2] = 300;
    // numbers[3] = 400;
    // numbers[4] = 500;
    // for (int i = 0; i < 5; i++)
    // {
    //     numbers[i] = (i + 1 * 100);
    //}

    //     int numbers3[5] = { 10,20, 30,40, 50 };
    //     int numbers2[5] = { 0, };
    //
  /*  int linecount[9] = { 0, };
    int ndan[8] = { 0, };

    int linecount1[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };*/

    
    //길을 걷는 사람 1
    
    
    

    // printf("배열의 값 앞은 (인덱스, 뒤는 값)  : (%d, %d)\n", 0, numbers[0]);
    // printf("배열의 값 앞은 (인덱스, 뒤는 값)  : (%d, %d)\n", 1, numbers[1]);
    // printf("배열의 값 앞은 (인덱스, 뒤는 값)  : (%d, %d)\n", 2, numbers[2]);
    // printf("배열의 값 앞은 (인덱스, 뒤는 값)  : (%d, %d)\n", 3, numbers[3]);
    // printf("배열의 값 앞은 (인덱스, 뒤는 값)  : (%d, %d)\n", 4, numbers[4]);

    //================================================================================================================


    
    // ## 구구단 출력하는 프로그램 만들기  => 몇 단 출력할건지  뒤에 곱해지는 것도 배열에 넣고 출력해보자

 



}



//void Description002()
//{
//    // 캐스팅 테스트
//    char char_ = 'A';
//    int int_ = (int)char_;
//    float float_value = 100.123;
//    
//    int_ = (int)float_value; // 강제 형 변환 
//
//    printf("int_ 변수 안에 무슨 값이 들어있나? %f \n", int_);
//}
//
//void AddOne(int* localNumber1, int* localNumber2)
//{
//    *localNumber1 += 1;
//    *localNumber2 += 1;
//}

//
//void description001(int number)
//{
//    printf("Number은 %d", int number;)
//}

