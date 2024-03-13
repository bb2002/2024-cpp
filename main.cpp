#include <iostream>
#include <string>

std::string startingGame();
void play(std::string);

int main() {
    std::string answer = startingGame();
    if (answer.length() != 3) {
        // 유저가 입력을 잘못한 경우
        std::cout << "Input.length() != 3" << std::endl;
        return -1;
    }

    play(answer);
}