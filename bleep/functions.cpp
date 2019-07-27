#include <iostream>

using namespace std;

void asterisk(string word, string &text, int i) {
  for (size_t k = 0; k < word.size(); k++) {
    text[i + k] = '*';
  }
}

void bleep(string word, string &text) {
  for (size_t i = 0; i < text.size(); i++) {
    int match = 0;

    for (size_t j = 0; j < word.size(); j++) {
      if (text[i + j] == word[j]) {
        match++;
      }
    }

    if (match == word.size()) {
      asterisk(word, text, i);
    }
  }
}