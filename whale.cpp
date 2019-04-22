#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string input = "turpentine and turtles";
  std::vector<char> vowel = {'a', 'e', 'i', 'o', 'u'};
  std::vector<char> result;

  for (int i = 0; i < input.size(); i++) {
    for (int j = 0; j < vowel.size(); j++) {
      if (input[i] == vowel[j]) {
        result.push_back(input[i]);
        if (input[i] == 'e' || input[i] == 'u') {
          result.push_back(input[i]);
        }
      }
    }
  }

  for (int i = 0; i < result.size(); i++) {
    std::cout << result[i];
  }
  std::cout << "\n";
}