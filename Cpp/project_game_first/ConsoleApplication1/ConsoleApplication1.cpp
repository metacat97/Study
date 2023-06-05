#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

//{ 키보드 매핑  #define 은 전처리기 중 정의하는 매크로  #define 이름 값 형식으로 입력
#define UP 0
#define DOWN 1
/* 나중에 이용하기 위해 추가만 해둠
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
void game_screen_main();
void drew_game_text();
int drew_game_option();
int game_choice_main();
int random_option();
int set_character();
void character_info();

//int character_hp();
int character_attack();

int enemy_hp();
int enemy_attack();

//int battle();
int battle_result();


int status_update();


int main()
{
    
    
    
   
    
    
    
    //메인 화면 콘솔 칸 제어
    screen_control();
    
    


    //printf("[ %d ]hp 저장됐는지 확인용", character_hp());
    //메인 화면 관련 함수  
    screen_main();
 
    /*
    못한 것들 
    6번 길을 걸으면 게임 클리어
    자동전투 리턴값으로 저장해서 돌려주고 그거 반환시켜서 하는 법 
    힐해주기 
    체력 떨어지면 게임 종료
    */
    
    
    
   
    return 0;

    
}



//int character_hp()
//{
//    //캐릭터 체력 선언
//    int character_hp = battle();
//    while (1) 
//    {
//        if (character_hp >= 50)
//        {
//            return character_hp;
//        }
//        else if (character_hp < 50)
//        {
//            character_hp = battle();
//            return character_hp;
//        }
//
//    }
//}
int character_attack()
{
    //캐릭터 체력과 공격력 선언
    int character_attack = 10;
    return character_attack;
}

int enemy_hp()
{
    //적 체력과 공격력 선언
    int enemy_hp = 20;
    return enemy_hp;
}
int enemy_attack()
{
    //적 체력과 공격력 선언
    int enemy_attack = 2;
    return enemy_attack;
}
int battle_result(int hp)
{

    int u_hp = hp;
    int u_attack = character_attack();
    int e_hp = enemy_hp();
    int e_attack = enemy_attack();


    //battle
    while (u_hp != 0 && e_hp != 0)
    {
        //무조건 캐릭터 선공 그 후 전투 자동진행
        e_hp = e_hp - u_attack;
        printf("유저의 공격\n");
        printf("[%d]의 데미지를 줬다.\n\n", u_attack);
        printf("남은 적의 체력 : [%d]\n\n\n", e_hp);
        if (e_hp == 0)
        {
            printf("승리\n\n");
            break;
        }

        u_hp = u_hp - e_attack;
        printf("적의 공격\n");
        printf("[% d]의 데미지 입었다.\n\n", e_attack);
        printf("유저의 체력 = [%d]\n\n\n", u_hp);
    }
   
    

    return u_hp;

}





//텍스트 출력 함수
void drew_game_text()
{
    //추가할 것 출력 시간 줘서 메시지 ㅁ느리게 출력
    for (int i = 0; control_key() == SUBMIT; i++)
    {
        switch (i)
        {
        case 0:
        {
            printf("\n\n           여기는 어디지...\n\n\n");
        }
        break;
        case 1:
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



//인게임 화면 출력 함수
void game_screen_main()
{
    
    printf("\n\n\n\n");
    printf("□□□□□□□□□□□□□□□□□□□□  □□□□□□□□□□□□□□□□□□□□\n");
    printf("========================================  ========================================\n");
    printf("                                  이곳은  가#■a◎             \n\n");
    printf("                                  당신의  운에따라             \n");
    printf("                                  장소가  달라집니다.          \n\n");

}

//인게임 선택지 출력 함수
int drew_game_option()
{
    int x = 50;
    int y = 25;

    control_x_y(x - 2, y);
    printf("> 운명을 맡긴다");
    control_x_y(x, y + 1);
    printf("캐릭터 설정");
    control_x_y(x, y + 2);
    printf("포기 한다");

    while (1)
    {
        int user_key_event = control_key();  //키 값 받아오기
        switch (user_key_event)
        {
        case UP: //입력된 키 값이 up인 경우

            if (y > 25)
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

}

//인게임 스텟 결정 함수
int set_character()
{
    int x = 30;
    int y = 20;

    control_x_y(x - 2, y);
    printf("> 힘");
    control_x_y(x, y + 1);
    printf("지력");
    control_x_y(x, y + 2);
    printf("돌아가기");

    while (1)
    {
        int user_key_event = control_key();  //키 값 받아오기
        switch (user_key_event)
        {
        case UP: //입력된 키 값이 up인 경우

            if (y > 20)
            {
                control_x_y(x - 2, y);
                printf(" ");
                control_x_y(x - 2, y -= 1);
                printf(">");
            }
            break;


        case DOWN:

            if (y < 22)
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
}

//랜덤 함수
int random_option(int hp)
{
    int persent = 100;
    int random_c = ((rand() % persent) + 1);


    int town = random_c >= 1 && random_c <= 30;
    int river = random_c >= 31 && random_c <= 50;
    int mountain = random_c >= 51 && random_c <= 100;
    int battle = random_c >= 51 && random_c <= 70;
    int heal = random_c >= 71 && random_c <= 100;

    if (town == 1)
    {
        system("cls");
        game_screen_main();
        printf("당신의 운명의 숫자는 %d \n",random_c);
        printf("이곳은 '마을'입니다.\n");
        //printf("휴식을 취해 HP가 회복됩니다."); //회복함수 
        return hp;
    }
    else if (river == 1)
    {
        system("cls");
        game_screen_main();
        printf("당신의 운명의 숫자는 %d \n", random_c);
        printf("이곳은 '바다'입니다.\n");
        //printf("HP가 소폭 하락합니다.");
        return hp;
    }
    else if (mountain == 1)
    {
        system("cls");
        game_screen_main();
        printf("당신의 운명의 숫자는 %d \n", random_c);
        printf("이곳은 '산'입니다.\n\n");
        //전투 확률
        if (battle == 1) 
        {

            printf("적과 조우합니다.\n");// 배틀 함수 시작
            printf("싸움이 시작됩니다.\n\n\n");
            hp = battle_result(hp);
        }
        //피할 확률
        else if (heal == 1)
        {
            printf("아무런 일도 일어나지 않았습니다.\n");
            printf("체력이 회복됩니다.\n");
            return hp;
            
        }
        return hp;
    }
}



//캐릭터 스텟 관련 정보창
void character_info()
{
    system("cls"); // cls 후에
    int strong = 0;
    int magic = 0;

    
    printf("\n\n ");
    printf("======================================================================\n ");// '=' 60개 씀
   
    
    printf("이곳에서는 능력치 설정이 가능합니다.           \n\n\n\n");
    printf("                  'w' 를 누르면 힘이 상승합니다.\n");
    printf("                  'f' 를 누르면 처음화면으로 돌아옵니다.\n");
   
    while (1) // f 키를 누르면 다시  함수를 종료해서 처음 함수가 실행되게끔 만드는것
    {
        if (control_key() == SUBMIT)
        {
            break;
        }
        else if (control_key() == UP)
        {
            printf("힘 상승\n");
            continue;
        }
    }
   
    
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
    /*
    else if (user_key == 'a' || user_key == 'A')
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
            //  게임 시작 
            game_choice_main();

            return 0;
        }
        else if (menu_code == 1)
        {
            info_menu(); // info game
        }
        else if (menu_code == 2)
        {

            break; // 종료
        }

        system("cls");

        //drew_menu();
    }

}
//메인화면 함수 정리 ==========여기까진 완료


//선택 화면
int game_choice_main()
{
    int hp = 100;
    while (1)
    {
        
        int game_code = drew_game_option();
        if (game_code == 0)
        {
            hp = random_option(hp);
            //리턴값은 랜덤 값이 되도록 다른 곳에서 해야겠네 
            //  선택 값 설정
           
           
        }
        else if (game_code == 1)
        {
            
            character_info();// info 캐릭터 스텟 
            
        }
        else if (game_code == 2)
        {

            return 0; // 게임 종료
        }

        //system("cls");

        //drew_menu();
    }
}


int status_update()
{
    while (1)
    {
        int status_code = set_character();
        if (status_code == 0)
        {
            return 0;
        }
        else if(status_code == 1)
        {
            return 0;
        }
        else if (status_code == 2)
        {
            system("cls");

            break; // 게임 종료
        }
    }
}