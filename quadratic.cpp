#include <cmath>
#include <iostream>

int main() {
  // declare abc variables as double
  double a, b, c;

  // ask for user input
  std::cout << "Enter a: ";
  std::cin >> a;
  std::cout << "Enter b: ";
  std::cin >> b;
  std::cout << "Enter c: ";
  std::cin >> c;

  // declare roots variables
  double root1 = (-b + std::sqrt(b * b - 4 * a * c)) / (2 * a);
  double root2 = (-b - std::sqrt(b * b - 4 * a * c)) / (2 * a);

  // output roots results
  std::cout << "Root 1 is " << root1 << "\n";
  std::cout << "Root 2 is " << root2 << "\n";
}