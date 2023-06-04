#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>


//{ 키보드 매핑  #define 은 전처리기 중 정의하는 매크로  #define 이름 값 형식으로 입력
#define UP 0
#define DOWN 1
/* 나중에 우측 좌측 누르는 경우 사용하기 위해 미리 만들어둠
#define LEFT 2
#define RIGHT 3
*/
#define SUBMIT 4


int control_key();
int drew_menu();
void screen_control();
void title_drew();
void control_x_y(int x, int y);
void info_menu();
int screen_main();
void game_drew();


int main()
{
    
    //메인 화면 콘솔 칸 제어
    screen_control();
    /*
    //메인 화면 관련 함수  
    screen_main();
 */

    game_drew();



    return 0;

    
}



// w , s ,f 눌렀을 때 입력되는 값 반환 함수
int control_key()
{
    char user_key = _getch();  //선언과 입력받는 함수 정의

    if (user_key == 'w' || user_key == 'W')
    {
        return UP;
    }
    else if (user_key == 's' || user_key == 'S')
    {
        return DOWN;
    }
    // 우측 a d 입력시 반환 하는 코드  필요없지만 일단 작성해둠
  /*  else if (user_key == 'a' || user_key == 'A')
    {
        return LEFT;
    }
    else if (user_key == 'd' || user_key == 'D')
    {
        return RIGHT;
    }*/
    else if (user_key == 'f' || user_key == 'F')
    {
        return SUBMIT;  //f를 선택으로 두기 위해서
    }
}
// 메뉴 선택지 출력 함수 
int drew_menu()
{
    int x = 37;
    int y = 25;
    control_x_y(x - 2, y);
    printf("> 게임 시작");
    control_x_y(x, y + 1);
    printf("게임 정보");
    control_x_y(x, y + 2);
    printf("게임 종료");

    while (1)
    {
        int user_key_event = control_key();  //키 값 받아오기
        switch (user_key_event)
        {
            case UP: //입력된 키 값이 up인 경우
              
                if(y > 25)
                {
                    control_x_y(x - 2, y);
                    printf(" ");
                    control_x_y(x - 2, y -= 1);
                    printf(">");
                }
                break;
            
            
            case DOWN:
            
                if (y < 27)
                {
                    control_x_y(x - 2, y);
                    printf(" ");
                    control_x_y(x - 2, y += 1);
                    printf(">");
                }
                break;
            

            case SUBMIT: 
                return y - 25;
            

        }
    }

    /*control_x_y(37-3,25);
    printf("=> 게임 시작");
    
    control_x_y(37, 27);
    printf("게임 종료  ");*/
}

// 게임 정보 출력 함수
void info_menu()
{
    system("cls"); // cls 후에
    printf("\n\n 이 게임은 선택하는 게임입니다.\n "); //게임정보 출력
    printf("제작자 = 김형준                  \n\n ");
    printf("조작법 ============================================================\n ");// '=' 60개 씀
    printf("'w', 's' 키를 이용해서 선택지를 고른다음 f 키를 눌러 실행합니다.\n\n");
    printf("게임을 시작하면 확률적으로 3가지의 경로중 한 곳을 걷게 됩니다.\n\n");
    printf("각각 마을, 산, 바다 중 선택되며 마을에 6번 도착하면 끝나는 게임입니다.\n\n");
    printf("마을에서는 HP가 70%% 회복됩니다.                                  \n\n");
    printf("바다에서는 HP가 10%% 차감됩니다.                                  \n\n");
    printf("산에서는 전투가 발생할 수 있습니다.                                \n\n");
    printf("전투는 자동으로 이루어지며 HP가 0이 되면 게임이 종료됩니다.           \n\n\n\n");
    printf("                 'f' 키를 누르면 처음화면으로 돌아옵니다.");

    while (1) // f 키를 누르면 다시  함수를 종료해서 처음 함수가 실행되게끔 만드는것
    {
        if (control_key() == SUBMIT) 
        {
            break;
        }
    }
}

//콘솔 창 화면 제어 
void screen_control()
{
    // 콘솔 창 크기 조정
    system("mode con cols=90 lines=40 | title game name"); //테스트 결과 87 33 이 무난함
    
    /*
    //깜박 거리는 커서 없애는 시스템  외우기 + 공부 필요 
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); //콘솔 핸들 가져오기
    CONSOLE_CURSOR_INFO ConsoleCursor;
    ConsoleCursor.bVisible = 0; //false 또는 0 : 숨기기
    ConsoleCursor.dwSize = 1;
    SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
    */
}

//xy 값 받는 함수
void control_x_y(int x, int y)
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); // 콘솔 핸들 가져오기 << 관련해서 공부 필요 있음
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(consoleHandle, pos);

 /* 위치 test
    control_x_y(0, 0);
    printf("여기0,0");
    control_x_y(50, 23);
    printf("여기50,24");*/

}

//  타이틀 출력 함수
void title_drew()
{
    //  상단 공백 추가
    printf("\n\n\n\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("□□□□□□□□□□□□□□□□□실행은  f를 눌러주세요. □□□□□□□□□□□□\n");
    printf("\n\n");
   
 
}


//메인화면 함수 정리
int screen_main()
{
    while (1)
    {
        title_drew();
        int menu_code = drew_menu();
        if (menu_code == 0)
        {
            system("cls");
            printf("%d", menu_code);
            return 0;
            //  게임 시작 


        }
        else if (menu_code == 1)
        {
            info_menu(); // info game
        }
        else if (menu_code == 2)
        {

            return 0; // 종료
        }

        system("cls");

        //drew_menu();
    }

}

//인게임 화면 출력 함수
void game_drew()
{
    //추가할 것 출력 시간 줘서 메시지 ㅁ느리게 출력
    for (int i = 0; control_key() == SUBMIT; i++)
    {
        switch (i)
        {
            case 0 :
            {
                printf("\n\n           여기는 어디지...\n\n\n");
            }
            break;
            case 1 :
            {
                system("cls");
                printf("\n\n           여기는 어디지2...\n\n\n");

            }
            break;
            default: 
            {
                break;
            }
            break;
        }

    }
    

}