#include <iostream>

bool it_question() {
  bool on_off_attempt;

  std::cout << "Hello. IT.\n";
  std::cout << "Have you tried turning it off and on again? y/n\n";
  std::cin >> on_off_attempt;

  return on_off_attempt;
}