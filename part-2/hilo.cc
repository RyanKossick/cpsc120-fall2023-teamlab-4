// Nilo Marks
// nilomarks34@csu.fullerton.edu
// @NighLow
// Partners: @RyanKossick
//
// hilo.cc
//

#include <iostream>

// Game over Function
void EndGame(int secret_number) {
  std::cout << "Incorrect, the secret number was " << secret_number
            << ", you lose." << '\n';
}

// Ask Players Function
void P1Question(int& secret_number) {
  std::cout << "Player 1, enter the secret number: ";
  std::cin >> secret_number;
}

void P2Question(int& guess_num, int attempt) {
  if (attempt == 1) {
    std::cout << "Player 2, enter your first guess: ";
  } else {
    std::cout << "Player 2, enter your second guess: ";
  }
  std::cin >> guess_num;
}

int main(int argc, char const* argv[]) {
  int secret_number = 0;
  int guess_num = 0;

  P1Question(secret_number);
  P2Question(guess_num, 1);

  if (secret_number == guess_num) {
    std::cout << "Correct, you win!" << std::endl;
    return 0;
  }
  if (guess_num > secret_number) {
    std::cout << "Too high" << std::endl;
  } else {
    std::cout << "Too low" << std::endl;
  }

  P2Question(guess_num, 2);

  if (secret_number == guess_num) {
    std::cout << "Correct, you win!" << std::endl;
  } else {
    EndGame(secret_number);
  }

  return 0;
}
