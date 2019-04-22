#include <stdlib.h>
#include <time.h>
#include <iostream>

/* This program plays a dumb version
   of rock, paper, scissors with you */

int main() {
  srand(time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;
  std::string c_pick;  // readable computer pick
  std::string u_pick;  // readable user pick

  // Out put instructions to user
  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  // Get user input
  while (user != 1 && user != 2 && user != 3) {
    std::cout << "shoot! ";
    std::cin >> user;
  }

  // Set readable picks
  switch (computer) {
    case 1:
      c_pick = "rock";
      break;
    case 2:
      c_pick = "paper";
      break;
    case 3:
      c_pick = "scissors";
      break;
    default:
      break;
  }
  switch (user) {
    case 1:
      u_pick = "rock";
      break;
    case 2:
      u_pick = "paper";
      break;
    case 3:
      u_pick = "scissors";
      break;
    default:
      break;
  }

  // Output readable picks
  std::cout << "You picked:      " << u_pick << "\n";
  std::cout << "Computer picked: " << c_pick << "\n";

  // Decide winner
  if (user == computer) {
    std::cout << "It's a draw!\n";
  } else if (user == 1 && computer == 2) {
    std::cout << "Computer wins!\n";
  } else if (user == 1 && computer == 3) {
    std::cout << "You win!\n";
  } else if (user == 2 && computer == 3) {
    std::cout << "Computer wins!\n";
  } else if (user == 2 && computer == 1) {
    std::cout << "You win!\n";
  } else if (user == 3 && computer == 1) {
    std::cout << "Computer wins!\n";
  } else if (user == 3 && computer == 2) {
    std::cout << "You win!\n";
  }
}