#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 카드 52장을 생성합니다.
    vector<int> cards(52);
    for (int i = 0; i < 52; i++) {
        cards[i] = i + 1;
    }

    // 카드를 섞습니다.
    random_shuffle(cards.begin(), cards.end());

    // 플레이어 1과 2의 점수를 초기화합니다.
    int player1_score = 0;
    int player2_score = 0;

    // 게임을 반복합니다.
    for (int round = 0; round < 10; round++) {
        // 플레이어 1이 카드를 뽑습니다.
        int player1_card = cards.back();
        cards.pop_back();

        // 플레이어 2가 카드를 뽑습니다.
        int player2_card = cards.back();
        cards.pop_back();

        // 플레이어 1의 점수를 계산합니다.
        if (player1_card > player2_card) {
            player1_score++;
        }
        else if (player1_card < player2_card) {
            player2_score++;
        }

        // 점수를 출력합니다.
        cout << "플레이어 1: " << player1_score << endl;
        cout << "플레이어 2: " << player2_score << endl;
    }

    // 게임의 승자를 출력합니다.
    if (player1_score > player2_score) {
        cout << "플레이어 1이 승리했습니다." << endl;
    }
    else if (player1_score < player2_score) {
        cout << "플레이어 2가 승리했습니다." << endl;
    }
    else {
        cout << "무승부입니다." << endl;
    }

    return 0;
}