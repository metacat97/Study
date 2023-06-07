#include <iostream>
#include <time.h>
#include <Windows.h>


//void study001();
//void study002();
void work002();
void work003();
void study004();
void swap1(char f_i, char s_c);
void swap2(char* f_c, char* s_v);
void pointer();

void shuffle();
void shuffleonce();

int main()
{
    //study002();

    //work003();
   
    //study004();


    //pointer();
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
    int numbers[45] = { 0, };
    for (int i = 0; i < 45; i++)
    {
        numbers[i] = i + 1;
    }
    // 배열의 선언과 초기화

 

   
    //// { 배열의 출력
    //printf("shuffle 하기전 \n\n");
    //for (int i = 0; i < 10; i++)
    //{
    //    printf("%d ", numbers[i]);

    //}
    //printf("\n");
    //} 배열의 출력
    
    
    //셔플로직
    const int shufflecount = 1000;
    srand(time(NULL));
    int randomIdx1, randomIdx2 = 0;


    for (int i = 0; i < shufflecount; i++) 
    {
        randomIdx1 = rand() % 45;
        randomIdx2 = rand() % 45;
        shuffleonce(&numbers[randomIdx1], &numbers[randomIdx2]);
        
    }
    printf("\n");


   
    
    
    //셔플로직

     // { 배열의 출력
    printf("셔플 한 후 \n\n ");
    for (int i = 0; i < 6; i++)
    {
        Sleep(800);
        printf("%d ", numbers[i]);

    }
    printf("\n");
    //} 배열의 출력
  
    
}



void pointer()
{
    //포인터 직접 쳐보기 
    int number = 100;
    int* ptrNumber = &number;
    //
    printf("number 변수의 주소는 : %p, 할당된 값은 : %d \n", &number, number);
    printf("ptrNumber 변수의 주소는 : %p , 할당된 값은 %p, 역참조한 값: %d \n", &ptrNumber, ptrNumber,*ptrNumber);

}


void swap1(char f_c, char s_c)
{
    char temp = '\0';
    printf("스왑 전");
    temp = f_c;
    f_c = s_c;
    s_c = f_c;


}

void swap2(char* f_c, char* s_c)
{
    char temp = '\0';
    printf("스왑 전");
    temp = (*f_c);
    (*f_c) = (*s_c);
    (*s_c) = temp;


}

void study004()
{
    
    char str[10] = "Hello";
    char temp = '\0';


    temp = str[0];

    str[0] = str[4];
    str[4] = temp;

    swap1(str[0], str[4]);
    printf("%s\n", str);

    printf("str의 0번째 값 : %c, str의 4번째 값 :%c \n", str[0], str[4]);
}




void work003()
{
    char u_str[250] = { 0, };
    int i = 0;
    int length = 0;
    printf("문자열을 입력하시오 (200자 이내로) : \n");
    std::cin >> u_str;
    char u_str2[300] = { 0, };
    

    for (i = 0; u_str[i] != '\0'; i++)
    {
        //ex)arr[] = "asdf"
        //arr[4]==0
        //i==length && i==4 length == 4
       /* if (u_str[i] == 0)
        {
            u_str[i] = '\0';
          
        }*/


        if (i % 2 == 0)
        {
            if (65 <= u_str[i] && u_str[i] <= 90)
            {
                u_str[i] = u_str[i];//대문자면 그대로 출력
            }
            else
            {
                u_str[i] = u_str[i] - 32;
                //printf() //대문자 아니면 소문자로 바꾸는 구문
            }
        }

        if (i % 2 == 1)
        {
            if (u_str[i] >= 97 && u_str[i] <= 122)
            {
                u_str[i] = u_str[i];

            }
            else
            {
                u_str[i] = u_str[i] + 32;
            }
        }

        length += 1;
        
    }
    printf("대소 제대로 입력 받았는지 => %s\n\n\n", u_str);
    
    char test = '\0';

    for (int j = 0; j <= length; j++)
    {
        //u_str2[i] = u_str[length];
        
        u_str2[i] = u_str[length - i];
        
    }
    printf("%s", u_str2);


   
}

//실습
void work002()
{

 //문자열을 입력받아서 대문자 - 소문자 - 대문자 - 소문자 순으로 수정해서 출력하는 프로그램 (easy)
 //위의 프로그램을 수정해서 거꾸로 뒤집어서 출력하는 프로그램 작성하기
    char u_str[250] = { 0, };
    int i = 0;
    int length = 0;
    printf("문자열을 입력하시오 (200자 이내로) : \n");
    std::cin >> u_str;


    // str[5] = "Good"
    // 5 = length 
    //실제적인 문자열의 길이
    //ex) =4
    //ex)1234567 = 7

    //ex)str[4] = 'h'
    //ex) i-1 = length 마지막 번호값
    //  i-2 = length 마지막에서 2번째 번호
    // length
   



    for (i = 0; i < 250; i++, length++)
    {
        //ex)arr[] = "asdf"
        //arr[4]==0
        //i==length && i==4 length == 4
        if (u_str[i] == 0)
        {
            u_str[i] = '\0';
            break;
        }


        if (i % 2 == 0)
        {
            if (65 <= u_str[i] && u_str[i] <= 90)
            {
                u_str[i] = u_str[i];//대문자면 그대로 출력
            }
            else
            {
                u_str[i] = u_str[i] - 32;
                //printf() //대문자 아니면 소문자로 바꾸는 구문
            }
        }

        if (i % 2 == 1)
        {
            if (u_str[i] >= 97 && u_str[i] <= 122)
            {
                u_str[i] = u_str[i];

            }
            else
            {
                u_str[i] = u_str[i] + 32;
            }
        }


    }

    printf("대소 대소 제대로 입력 받았는지 => %s", u_str);
    
   
    






    //for (i = 0; i < 250; i++)
    //{   
    //   

    //    if (u_str[i] == 0)
    //    {
    //        u_str[i] = '\0';
    //        break;
    //    }


    //    if (i % 2 == 0)
    //    {
    //        if (65 <= u_str[i] && u_str[i] <= 90)
    //        {
    //            u_str[i] = u_str[i];//대문자면 그대로 출력
    //        }
    //        else 
    //        {
    //            u_str[i] = u_str[i] - 32;
    //            //printf() //대문자 아니면 소문자로 바꾸는 구문
    //        }
    //    }

    //    if (i % 2 == 1)
    //    {
    //        if (u_str[i] >= 97 && u_str[i] <= 122)
    //        {
    //            u_str[i] = u_str[i];

    //        }
    //        else 
    //        {
    //            u_str[i] = u_str[i] + 32;
    //        }
    //    }

    //    
    //}

    //printf("제대로 입력 받았는지 => %s", u_str);

   


}


//지금까지 배운 내용 
// 문자열 입력 받아서 출력 하는 것
//void study002()
//{
//    char str[300] = { 0, };
//
//    printf(" 문자열을 입력하시오 (200자 이내로) : ");
//    std::cin >> str;
//    //scanf_s("%s", str);
//
//    printf("제대로 입력을 받았는지=> %s", str);
//}



//void study001()
//{
//    char string_[15] = "Good morning!\n";
//    //char string_copy[16] = "Good morning!\n";  // 원래 처음에 배열을 고정해버리면 주소값 그대로 쓰고 싶은데 그렇게 못함
//    // 즉 한 번 결정나면 원리적으로는 배열을 새로 만들어야함 
//    char string2[] = "Good mornsdf  ing! \n";
//    int numbers[10] = { 0, };
//
//
//    printf("%s", string_);
//
//
//    printf("%d \n", sizeof(string_) * sizeof(char));  // sizeof 를 해서 크기를 확인
//    printf("%d \n", sizeof(string2) * sizeof(char));
//    printf("정수형 배열의 크기 %d\n", sizeof(numbers));
//    printf("정수형 배열의 크기 %d\n", sizeof(numbers) / sizeof(int));
//
//
//    bool isNullSameZero = false;
//    if (0 == '\0')
//    {
//        isNullSameZero = true;
//    }
//    else
//    {
//        isNullSameZero = false;
//    }
//    printf("Null 값은 0과 같은 값인가 [%d]\n", isNullSameZero);
//
//    char string3[4];
//    string3[0] = 'H';
//    string3[1] = 'i';
//    string3[2] = '!';
//    string3[3] = '\0';   //파일의 끝을 나타내는 형식
//
//
//    char string4[4] = "Hi!";
//
//    printf("string4번 찍어보겠슴 -> %s \n", string3);
//    printf("string4번 찍어보겠슴 -> %s \n", string4);
//
//
//}