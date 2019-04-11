#include <iostream>

int main() {
  // declare vars
  int earth_weight;
  int dest_weight;
  int planet;

  // ask for earth weight
  std::cout << "Enter weight on earth: ";
  std::cin >> earth_weight;

  // ask for destination planet
  std::cout << "Enter destination planet: ";
  std::cin >> planet;

  // caluclate destination weight
  switch (planet) {
    case 1:
      dest_weight = earth_weight * 0.78;
      break;
    case 2:
      dest_weight = earth_weight * 0.39;
      break;
    case 3:
      dest_weight = earth_weight * 2.65;
      break;
    case 4:
      dest_weight = earth_weight * 1.17;
      break;
    case 5:
      dest_weight = earth_weight * 1.05;
      break;
    case 6:
      dest_weight = earth_weight * 1.23;
      break;

    default:
      break;
  }

  // output destination weight
  std::cout << "Your weight will be: " << dest_weight << "\n";
}