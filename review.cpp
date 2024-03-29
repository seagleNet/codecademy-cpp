#include <iostream>
#include <vector>

int main() {
  std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
  int sum = 0;
  int product = 0;

  for (int i = 0; i < numbers.size(); i++) {
    if (numbers[i] % 2 == 0) {
      sum = sum + numbers[i];
    } else if (product == 0) {
      product = numbers[i];
    } else {
      product = product * numbers[i];
    }
  }

  std::cout << "Sum of even numbers is " << sum << "\n";
  std::cout << "Product of odd numbers is " << product << "\n";
}