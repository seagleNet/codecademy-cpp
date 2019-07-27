#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;

int main() {
  string word = "broccoli";
  string statement = "I actually like broccoli. I find broccoli tasty!";

  bleep(word, statement);

  cout << statement << "\n";
}