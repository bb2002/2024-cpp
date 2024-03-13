#include <string>

int getStrikeCount(std::string guess, std::string answer) {
    int strike = 0;
    for (int i = 0; i < guess.length(); ++i) {
        if (guess[i] == answer[i]) {
            ++strike;
        }
    }

    return strike;
}

int getBallCount(std::string guess, std::string answer) {
    int ball = 0;
    for (int i = 0; i < guess.length(); ++i) {
        for (int j = 0; j < answer.length(); ++j) {
            if (guess[i] == answer[j] && i != j) {
                ++ball;
            }
        }
    }

    return ball;
}