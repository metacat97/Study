#include <iostream>
#include <time.h>
#include <Windows.h>
#include <stdlib.h>
#include <conio.h>


void print_card();

void shuffle(int* firstNumber, int* secondNumber);
void print_screen();


int main()
{

    
    print_card();
   


}



void print_screen()
{
    printf("┌──────────────────────────────────────────────────────────────────────────────────────┐\n");
    printf("│                                                                                      │\n");
    printf("│                                                                                      │\n");
 
    printf("│                                                                                      │\n");
    printf("│                                  카드 맞 추 기                                       │ \n"); 
    printf("│                                                                                      │\n");
    printf("│                                                                                      │\n");
    printf("└──────────────────────────────────────────────────────────────────────────────────────┘\n");
   

}


void print_card()
{
    int cards[53] = { 0, };
	char cardpatterns[4][4] = { "♠","◆","♥","♣" };

    const int max_coin = 50;

    int first_card = 0;
    int second_card = 0;
    int user_card = 0;

    int check1_num = 0;
    int check2_num = 0;
    int check3_num = 0;

    //작은거 큰거 쉽게 비교할려고 
    int pc_card[2] = { 0, };

    int coin_count = 10;
    int betting_coin = 0;

    while (1)
    {
        //탈출 조건
        if (coin_count >= 50)
        {
            printf("\n\n게임을 승리하였습니다\n");
            printf("\n게임을 종료합니다.\n");
            break;
        }
        else if (coin_count == 0)
        {
            printf("코인을 다 소모했습니다\n");
            printf("\n게임을 종료합니다.\n");
            break;
        }
        //탈출 조건

        system("cls");
      
       //설명
        printf("트럼프 카드 2장 중 사이에 값이 있다면 당신의 승리\n\n");
        printf("섞는중...");
        Sleep(3000);
        system("cls");
        print_screen();
        printf("트럼프 카드 2장 중 사이에 값이 있다면 당신의 승리\n\n");
        printf("현재 당신의 잔여 코인 = %d            목표 달성까지 %d\n", coin_count,(max_coin - coin_count));
     

        //{배열 선언
        for (int i = 0; i < 52; i++)
        {
            if ((i % 13) == 0)
            {
                cards[i] = 'A';
            }
            else if ((i % 13) == 10)
            {
                cards[i] = 'J';
            }
            else if ((i % 13) == 11)
            {
                cards[i] = 'Q';
            }
            else if ((i % 13) == 12)
            {
                cards[i] = 'K';
            }
            else
            {
                cards[i] = i % 13 + 1;
            }

        } //}배열 선언



        const int shuffleCount = 500;
        int randomIdx1, randomIdx2 = 0;
        srand(time(NULL));

        for (int i = 0; i < shuffleCount; i++)
        {
            randomIdx1 = rand() % 52;
            randomIdx2 = rand() % 52;
            shuffle(&cards[randomIdx1], &cards[randomIdx2]);
        }
        //셔플 로직
        printf("\n");





        first_card = rand() % 52 + 1;
        second_card = rand() % 52 + 1;
        user_card = rand() % 52 + 1;


        //컴퓨터가 뽑은 카드 보여주기 




        if (cards[first_card] < 15)
        {
            // printf("if 첫번==%d====\n", cards[first_card]);
             //printf("if 첫번==%d===\n", first_card);
            if (first_card < 13)
            {
                printf("%s / %d ", cardpatterns[0], cards[first_card]);
            }
            else if (first_card < 26)
            {
                printf("%s / %d ", cardpatterns[1], cards[first_card]);
            }
            else if (first_card < 39)
            {
                printf("%s / %d ", cardpatterns[2], cards[first_card]);
            }
            else
            {
                printf("%s / %d ", cardpatterns[3], cards[first_card]);
            }
        }
        else
        {
            // printf("====%d===\n", cards[first_card]);
             //printf("====%d===\n", first_card);
            if (first_card < 13)
            {
                printf("%s / %c ", cardpatterns[0], cards[first_card]);
            }
            else if (first_card < 26)
            {
                printf("%s / %c ", cardpatterns[1], cards[first_card]);
            }
            else if (first_card < 39)
            {
                printf("%s / %c ", cardpatterns[2], cards[first_card]);
            }
            else
            {
                printf("%s / %c ", cardpatterns[3], cards[first_card]);
            }
        }
        printf("\n");

        if (cards[second_card] < 15)
        {
            //printf("if 첫번==%d====\n", cards[second_card]);
           // printf("if 첫번==%d===\n", second_card);


            if (second_card < 13)
            {
                printf("%s / %d ", cardpatterns[0], cards[second_card]);
            }
            else if (second_card < 26)
            {
                printf("%s / %d ", cardpatterns[1], cards[second_card]);
            }
            else if (second_card < 39)
            {
                printf("%s / %d ", cardpatterns[2], cards[second_card]);
            }
            else
            {
                printf("%s / %d ", cardpatterns[3], cards[second_card]);
            }
        }
        else
        {
            //printf("====%d===\n", cards[second_card]);
            //printf("====%d===\n", second_card);

            if (second_card < 13)
            {
                printf("%s / %c ", cardpatterns[0], cards[second_card]);
            }
            else if (second_card < 26)
            {
                printf("%s / %c ", cardpatterns[1], cards[second_card]);
            }
            else if (second_card < 39)
            {
                printf("%s / %c ", cardpatterns[2], cards[second_card]);
            }
            else
            {
                printf("%s / %c ", cardpatterns[3], cards[second_card]);
            }
        }

        printf("\n\n");


        // printf("\n\n%d == 13으로 나누어진 값 \n\n", first_card / 13);

        if (cards[first_card] == 65)
        {
            check1_num = 1;
        }
        else if (cards[first_card] == 74)
        {
            check1_num = 11;
        }
        else if (cards[first_card] == 81)
        {
            check1_num = 12;
        }
        else if (cards[first_card] == 75)
        {
            check1_num = 13;
        }
        else
        {
            check1_num = cards[first_card];
        }

        //printf("\n\n%d\n\n", check1_num);

        if (cards[second_card] == 65)
        {
            check2_num = 1;
        }
        else if (cards[second_card] == 74)
        {
            check2_num = 11;
        }
        else if (cards[second_card] == 81)
        {
            check2_num = 12;
        }
        else if (cards[second_card] == 75)
        {
            check2_num = 13;
        }
        else
        {
            check2_num = cards[second_card];
        }

        pc_card[0] = check1_num;
        pc_card[1] = check2_num;

       


        if (pc_card[0] > pc_card[1])
        {
            int temp = 0;
            temp = pc_card[0];
            pc_card[0] = pc_card[1];
            pc_card[1] = temp;
        }
        // printf("\n\n%d 그리고 %d\n\n", pc_card[0], pc_card[1]);
       // char user_input = _getch();

        printf("%d ~ %d 사이에 있으면 된다 \n\n", pc_card[0], pc_card[1]);
        printf("\n                 넣을 코인을 입력해주세요.\n");
        scanf_s("%d", &betting_coin);
        
        while (betting_coin > coin_count || betting_coin == 0 )
        {
            
            if (betting_coin > coin_count)
            {
                printf("가진 코인 만큼 입력해주시기 바랍니다.===>");
            }
            else if (betting_coin == 0)
            {
                printf("다시 입력해주시기 바랍니다===>");
            }
            else
            {
                break;
            }
            scanf_s("%d", &betting_coin);

        }
        printf("\n%d만큼 넣으셨습니다.\n\n", betting_coin);

        //printf("아무 키나 눌러서 카드를 뽑으세요.");
        //user_input = _getch();

        printf("당신의 카드는 : ");
        if (cards[user_card] < 15)
        {

            if (user_card < 13)
            {
                printf("%s / %d ", cardpatterns[0], cards[user_card]);
            }
            else if (user_card < 26)
            {
                printf("%s / %d ", cardpatterns[1], cards[user_card]);
            }
            else if (user_card < 39)
            {
                printf("%s / %d ", cardpatterns[2], cards[user_card]);
            }
            else
            {
                printf("%s / %d ", cardpatterns[3], cards[user_card]);
            }
        }
        else
        {

            if (user_card < 13)
            {
                printf("%s / %c ", cardpatterns[0], cards[user_card]);
            }
            else if (user_card < 26)
            {
                printf("%s / %c ", cardpatterns[1], cards[user_card]);
            }
            else if (user_card < 39)
            {
                printf("%s / %c ", cardpatterns[2], cards[user_card]);
            }
            else
            {
                printf("%s / %c ", cardpatterns[3], cards[user_card]);
            }
        }
        printf("\n");

        if (cards[user_card] == 65)
        {
            check3_num = 1;
        }
        else if (cards[user_card] == 74)
        {
            check3_num = 11;
        }
        else if (cards[user_card] == 81)
        {
            check3_num = 12;
        }
        else if (cards[user_card] == 75)
        {
            check3_num = 13;
        }
        else
        {
            check3_num = cards[user_card];
        }



        //연산하는 로직
       // while (1)
      //  {
		if (check3_num >= pc_card[0] && check3_num <= pc_card[1])
		{
			// printf("승리하여 베팅 코인에 2배 획득\n");
			coin_count = coin_count + (betting_coin * 2);
			printf("coin = = = %d", coin_count);
			// break;
		}
		else
		{
			//printf("패배하여 베팅한 코인[%d]만큼 잃었습니다.\n",betting_coin);
			coin_count = coin_count - betting_coin;
			//  break;
		}
      //  }

        printf("\n");

        printf("결과는 %d ::: 베팅은 %d\n", coin_count, betting_coin);

        printf("계속하시려면 아무 키나 눌러주세요.");
        char user_input = _getch();
        
        



       

        

        /*
    3. 플레이어는 카드를 보고 베팅한다.
    4. 플레이어의 카드가 컴퓨터의 카드 2장 사이에 존재한다면, 플레이어는 한 번의 게임을 승리하여 베팅 점수의 2배를 얻는다.
    5. 플레이어의 카드가 컴퓨터의 카드 2장 사이에 존재하지 않는 경우, 플레이어는 한 번의 게임을 패배하여 베팅 점수만큼 잃는다.
    6. 플레이어는 일정 점수를 획득하면 게임을 최종 승리하며, 0점 이하인 경우 게임을 최종 패배한다. 이 경우에 게임을 종료한다 .
        */

    }
}

void ptr_card()
{

}

void shuffle(int* firstNumber, int* secondNumber)
{
    int temp = 0;
    temp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temp;
}
