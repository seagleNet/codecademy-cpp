#include <iostream>
#include "ufo_functions.hpp"

int main() {
  // Greet player and output instructions
  greet();

  // Codeword to be guessed
  std::string codeword = "codecademy";
  // Player's answer
  std::string answer = "__________";
  // Missed guesses counter
  int misses = 0;
  // Incorrect guess vector
  std::vector<char> incorrect;
  // Guess status
  bool guess = false;
  // Guessed letter
  char letter;

  // Check answer and misses
  while (answer != codeword && misses < 7) {
    display_misses(misses);
    display_status(incorrect, answer);

    std::cout << "Please enter your guess: ";
    std::cin >> letter;

    for (size_t i = 0; i < codeword.size(); i++) {
      if (letter == codeword[i]) {
        guess = true;
        answer[i] = letter;
      }
    }
    if (guess) {
      std::cout << "Correct!\n";
    } else {
      std::cout << "Incorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses++;
    }

    // Reset guess to default false
    guess = false;
  }

  // Check outcome and end game
  end_game(answer, codeword);
}
