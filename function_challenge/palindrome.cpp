#include <iostream>
#include <string>
#include <vector>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {
  int match = 0;

  for (size_t i = 0; i < text.length(); i++) {
    //std::cout << "reverse: " << text[text.length() - 1 - i] << "\n";
    //std::cout << "forward: " << text[i] << "\n";
    if (text[i] == text[text.length() - 1 - i]) {
      match++;
    }
  }

  //std::cout << text.length() << "\n";
  //std::cout << match << "\n";

  if (match == text.length()) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
}