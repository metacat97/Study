#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>

void shuffle();
void shuffleonce();


int main()
{
    
    shuffle();


}



void shuffleonce(int* firstnumber, int* secondnumber)
{
    int temp = 0;
    temp = *firstnumber;
    *firstnumber = *secondnumber;
    *secondnumber = temp;
}

void shuffle()
{
    //배열의 선언과 초기화
    int numbers[52] = { 0, };
    for (int i = 0; i < 52; i++)
    {
        numbers[i] = i + 1;
    }
    // 배열의 선언과 초기화
    int sapde_count = 0;
    int heart_count = 0;
    int diamond_count = 0;
    int clover_count = 0;

    //셔플로직
    const int shufflecount = 1000;
    srand(time(NULL));
    
    int randomIdx1, randomIdx2 = 0;
    

    for (int i = 0; i < shufflecount; i++)
    {
        randomIdx1 = rand() % 52;
        randomIdx2 = rand() % 52;
        shuffleonce(&numbers[randomIdx1], &numbers[randomIdx2]);

    }

    //printf("%d", numbers[6]);

    printf("\n");
    //셔플로직

     // { 배열의 출력
    printf("셔플 한 후 \n\n ");
   
        
        for (int i = 0; i < 1; i++)
        {

            if (numbers[i] >= 1 && numbers[i] < 14)
            {
                Sleep(800);
                printf("스페이드 / ");
                if (numbers[i] == 0)
                {
                    printf("에이스");
                }
                else if (numbers[i] == 11)
                {
                    printf("J");
                }
                else if (numbers[i] == 12)
                {
                    printf("Q");
                }
                else if (numbers[i] == 13)
                {
                    printf("K");
                }
                else
                {
                    printf("%d", numbers[i]);
                }
            }
            else if (numbers[i] >= 14 && numbers[i] < 26)
            {
                Sleep(800);
                printf("하트 / ");
                if (numbers[i] == 0)
                {
                    printf("에이스");
                }
                else if (numbers[i] == 23)
                {
                    printf("J");
                }
                else if (numbers[i] == 24)
                {
                    printf("Q");
                }
                else if (numbers[i] == 25)
                {
                    printf("K");
                }
                else
                {
                    for (int j = numbers[i]; j <= numbers[i]; j++)
                    {
                        numbers[i] = numbers[i] - 13;
                    }
                    printf("%d", numbers[i]);
                }
            }
            else if (numbers[i] >= 26 && numbers[i] < 40)
            {
                Sleep(800);
                printf("다이아몬드 /");
                if (numbers[i] == 0)
                {
                    printf("에이스");
                }
                else if (numbers[i] == 37)
                {
                    printf("J");
                }
                else if (numbers[i] == 38)
                {
                    printf("Q");
                }
                else if (numbers[i] == 39)
                {
                    printf("K");
                }
                else
                {
                    for (int j = numbers[i]; j <= numbers[i]; j++)
                    {
                        numbers[i] = numbers[i] - 26;
                    }
                    printf("%d", numbers[i]);
                }
            }
            else if (numbers[i] >= 40 && numbers[i] < 53)
            {
                Sleep(800);
                printf("클로버 / ");
                if (numbers[i] == 0)
                {
                    printf("에이스");
                }
                else if (numbers[i] == 50)
                {
                    printf("J");
                }
                else if (numbers[i] == 51)
                {
                    printf("Q");
                }
                else if (numbers[i] == 52)
                {
                    printf("K");
                }
                else
                {
                    for (int j = numbers[i]; j <= numbers[i]; j++)
                    {
                        numbers[i] = numbers[i] - 39;
                    }
                    printf("%d", numbers[i]);
                }
            }
            printf("\n");
            
        



        /*Sleep(800);
        printf("%d ", numbers[i]);*/

    }
    printf("\n");
    //} 배열의 출력


}
