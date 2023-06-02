#include <iostream>
using namespace std;

int main()
{
   
    char user_input = '0';
    int loop_count = 1;
    while (true)
    {
       
        /*
        if (loop_count == 7)
        { 
            loop_count += 1;
            continue;   //해당 조건과 부합하면 그 부분 다 스킵하고 빠져나감  
        }
        */
        /*
        if (loop_count == 7)
        {
            loop_count += 1;
            break;   //해당 조건과 부합하면 멈춤 
        }
        */ 

        // 특정 키를 입력 받았을 때 종료되는 게임적

        if (loop_count == 1)
        {
            printf("[튜토리얼] 만약 게임을 만들려고 한다면 이런식으로 \n\n");
        }

        printf("[System] 당신은 플레이어 입니다. \n");
        printf("수행할 액션을 입력해 주세요. : ");
        scanf_s("%c", &user_input);

        if (user_input == 'q' || user_input == 'Q')
        {
            printf("\n[System] 프로그램을 종료합니다\n");
            break;
        }
        else
        {
            printf("\n\n[System] 해당 입력은 정의되어 있지 않습니다. \n");
            loop_count += 1;
            continue;
        }

       
        loop_count += 1;
            // loop: 일정 횟수 반복 
    }




}

