#include <iostream>

int main()
{

    // ���� : �ݺ��� ����ؼ� User ���� �ƹ� ���ڳ� �Է� �޴´�.
    // �� ���ڰ� Ȧ�� ���� ¦������ �����ؼ� ����ϴ� ���α׷� �����
    // - ������ �����ϱ� ������ �ݺ��� ��.



    int user_input = 0;
    int loop_count = 1;



    while (loop_count == 1)
    {


        printf("[System] ����� �ƹ� ���ڳ� �Է��� �����մϴ�. \n�����Ͻ� ���� 0�� �����ֽñ� �ٶ��ϴ�. \n ���ڸ� �Է����ּ���. :");
        scanf_s("%d", &user_input);
        //scanf_s("%c", &user_input);

        //Ż�� ���� 
        if (user_input == 0)
        {
            loop_count -= 1;
            printf("\n[System] ���α׷��� �����մϴ�\n");
            //break;
        }



        // ���ǹ� ����
        if ((user_input % 2) == 1 || (user_input % 2) == -1)
        {
            printf("����� �Է��Ͻ� ���� %d�� Ȧ�� �Դϴ�\n\n", user_input);
            continue;

        }
        printf("����� �Է��Ͻ� ���� %d�� ¦�� �Դϴ�.\n\n", user_input);
        
        
        
    }

}