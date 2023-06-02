#include <iostream>

int main()
{

    // 문제 : 반복문 사용해서 User 에게 아무 숫자나 입력 받는다.
    // 그 숫자가 홀수 인지 짝수인지 구별해서 출력하는 프로그램 만들기
    // - 유저가 종료하기 전까지 반복할 것.



    int user_input = 0;
    int loop_count = 1;



    while (loop_count == 1)
    {


        printf("[System] 당신은 아무 숫자나 입력이 가능합니다. \n종료하실 경우는 0을 눌러주시기 바랍니다. \n 숫자를 입력해주세요. :");
        scanf_s("%d", &user_input);
        //scanf_s("%c", &user_input);

        //탈출 조건 
        if (user_input == 0)
        {
            loop_count -= 1;
            printf("\n[System] 프로그램을 종료합니다\n");
            //break;
        }



        // 조건문 시작
        if ((user_input % 2) == 1 || (user_input % 2) == -1)
        {
            printf("당신이 입력하신 숫자 %d은 홀수 입니다\n\n", user_input);
            continue;

        }
        printf("당신이 입력하신 숫자 %d는 짝수 입니다.\n\n", user_input);
        
        
        
    }

}