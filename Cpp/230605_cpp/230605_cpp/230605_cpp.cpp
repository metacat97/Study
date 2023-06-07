

#include <iostream>
#include <conio.h>
#include <windows.h>





//void description01(int number);
//void AddOne(int* localNumber1, int* localNummber2);
//void Description002();
//void Description003();

int main()
{
   /* int main_number1 = 0;
    int main_number2 = 0;*/
    //AddOne(&main_number1, &main_number2);
   // description001(10);
   // Description003();
//===================================================================================
    //hard 과제 시작

    //변수 선언 및 초기화 시작
    char user_input = _getch();
    int i = 0;
    int j = 0;
    int count_num = 0;
    char board[5] = { 0, };
    ////변수 선언 및 초기화 끝
    //int test = 1;
    //
    //int i, j, tr = 0;
    //char board[5] = { 0, }; //선언과 동시에 다 0 값으로 초기화
    //for (tr = 0; tr < 5; tr++)
    //{
    //    for (i = 0; i < 5; i++)
    //    {
    //        board[i] = '*';
    //        if (i == tr)
    //        {
    //            board[i] = '0';
    //        }
    //    }
    //    for (j = 0; j < 5; j++)
    //    {
    //        printf("%c ", board[j]);
    //    }
    //    _getch();
    //    system("cls");
        //printf("\n");

    
    for (;;)
    {
        if (user_input == 'A' || user_input == 'a')
        {
            bool result = (count_num <= 0) ? count_num == 0 : count_num -= 1;
        }
        else if (user_input == 'D' || user_input == 'd')
        {
            bool result = (count_num >= 4) ? count_num == 4 : count_num += 1;
        }
        
            for (i = 0; i < 5; i++)
            {
                board[i] = '*';
                if (i == count_num)
                {
                    board[i] = '0';
                }
            }
            for (j = 0; j < 5; j++)
            {
                printf("%c ", board[j]);
            }
            user_input = _getch();
            system("cls");
        


    }




}
    // 
    // 
    //while(1)
    //{
    //    
    //    switch (user_input)
    //    {
    //    case 'a':
    //    {
    //        printf("a 누름");
    //        // 카운트 --
    //        count_num--;
    //        //카운트
    //        system("cls");


    //        for (i = 0; i < 5; i++)
    //        {
    //            board[i] = '*';
    //            if (i == count_num)
    //            {
    //                board[i] = '0';
    //            }
    //        }
    //        //출력하는         for (j = 0; j < 5; j++)

    //        for (j = 0; j < 5; j++)
    //        {
    //            printf("%c ", board[j]);
    //        }

    //        printf("\n");
    //    }
    //    case 'd':
    //    {
    //        printf("d 누름");
    //        count_num++;
    //        system("cls");


    //        for (i = 0; i < 5; i++)
    //        {
    //            board[i] = '*';
    //            if (i == count_num)
    //            {
    //                board[i] = '0';
    //            }
    //        }
    //        //출력하는         for (j = 0; j < 5; j++)

    //        for (j = 0; j < 5; j++)
    //        {
    //            printf("%c ", board[j]);
    //        }

    //        // printf("\n");
    //    }
    //    }
    //}
        

    




    
    //for (;;)
    //{
        //if 방식
        /*if (user_input == 'A' || user_input == 'a')
        {
           
            break;
        }
        else if (user_input == 'D' || user_input == 'd')
        {
            
            break;
        }*/
        //if 방식
        
        //switch 방식
       /* switch (user_input)
        {
            case 'a':
            {
                printf("a 누름");
            }
            case 'd':
            {
                printf("d 누름");
            }
        }*/
        //switch 방식 끝
   // }


    //hard 과제 끝
//===================================================================================

    //normal 과제시작
    /*int i, j, tr = 0;
    char board[5] = { 0, }; //선언과 동시에 다 0 값으로 초기화
    for (tr = 0; tr < 5; tr++)
    {
        for (i = 0; i < 5; i++)
        {
            board[i] = '*';
            if (i == tr)
            {
                board[i] = '0';
            }
        }
        for (j = 0; j < 5; j++)
        {
            printf("%c ", board[j]);
        }

        printf("\n");
    }
    //normal 과제 끝

//===================================================================================

    //{board 초기화 하는 로직 시작
    for (i = 0; i < 5; i++)
    {
        board[i] = '*';
        if (i == 0)
        {
            board[i] = '0';
        }
    }
    //}board 초기화 하는 로직 끝
   
    //{board 출력하는 로직 시작
    for (j = 0; j < 5; j++)
    {
        printf("%c ", board[j]);
    }
    printf("\n");
    //}board 출력하는 로직 끝
    */
//===================================================================================
 //배열 선언 연습
 /*   int arr[10] = { 2, 10, 30, 21, 34, 23, 53, 21, 9, 1 };
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("배열의 %d 번째 원소 : %d \n", i + 1, arr[i]);
    }
    return 0;*/
//==================================================================================

    // {일반적인 곱셈 하는 식 시작
  /*  int i, j, sum;
    
    for (i = 1; i < 9; i++)
    {
        printf("%d단 시작\n", i);

        for (j = 1; j < 10; j++)
        {
            sum = i * j;
            printf(" [%d]  *  [%d]  = [%d]\n\n", i, j, sum);
            

        }
        printf("%d단 끝\n\n", i);
    }*/
    // } 일반적인 곱셈 하는 식 끝
//==================================================================================
//5개의 변수의 값을 각각 입력받아서 계산하는 

    //int arr[5]; //배열 0 1 2 3 4 5
    //int i, ave = 0;

    //for (i = 0; i < 5; i++)
    //{
    //    printf("%d 번째 학생의 성적을 입력해주세요", i + 1);
    //    scanf_s("%d", &arr[i]);
    //}

    //for (i = 0; i < 5; i++)
    //{
    //    ave = ave + arr[i];
    //}

    //printf("전체 학생의 평균은 : %d \n", ave / 5);
    //return 0;
//==================================================================================

//}

//void Description003()
//{
//    // 배열이란 무엇인지 실습
//    //int numbers[5]; //5개의 변수를 선언한 것
//
//
//    // numbers[0] = 100;
//    // numbers[1] = 200;
//    // numbers[2] = 300;
//    // numbers[3] = 400;
//    // numbers[4] = 500;
//    // for (int i = 0; i < 5; i++)
//    // {
//    //     numbers[i] = (i + 1 * 100);
//    //}
//
//    //     int numbers3[5] = { 10,20, 30,40, 50 };
//    //     int numbers2[5] = { 0, };
//    //
//  /*  int linecount[9] = { 0, };
//    int ndan[8] = { 0, };
//
//    int linecount1[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };*/
//
//    
//    //길을 걷는 사람 1
//   
//    // printf("배열의 값 앞은 (인덱스, 뒤는 값)  : (%d, %d)\n", 0, numbers[0]);
//    // printf("배열의 값 앞은 (인덱스, 뒤는 값)  : (%d, %d)\n", 1, numbers[1]);
//    // printf("배열의 값 앞은 (인덱스, 뒤는 값)  : (%d, %d)\n", 2, numbers[2]);
//    // printf("배열의 값 앞은 (인덱스, 뒤는 값)  : (%d, %d)\n", 3, numbers[3]);
//    // printf("배열의 값 앞은 (인덱스, 뒤는 값)  : (%d, %d)\n", 4, numbers[4]);
//
//    //================================================================================================================
//
//
//    
//    // ## 구구단 출력하는 프로그램 만들기  => 몇 단 출력할건지  뒤에 곱해지는 것도 배열에 넣고 출력해보자
//}
 







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

