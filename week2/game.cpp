#include <iostream>
#include <string>

int getStrikeCount(std::string guess, std::string answer);
int getBallCount(std::string guess, std::string answer);

std::string startingGame() {
    std::string ans;
    std::cout << "Enter a answer: ";
    std::cin >> ans;
    return ans;
}

void play(std::string answer) {
    std::string guess;

    for(;;) {
        int strike = 0, ball = 0;
        std::cout << "Enter a guess: ";
        std::cin >> guess;

        if (guess.length() != 3) {
            std::cout << "Input.length() != 3" << std::endl;
            continue;
        }

        if (guess == answer) {
            std::cout << "You win!" << std::endl;
            break;
        }

        std::cout << "Strikes: " << getStrikeCount(guess, answer) << ", Balls: " << getBallCount(guess, answer) << std::endl;
    }
}
