#include <iostream>
#include "profile.hpp"

using namespace std;

int main() {
  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
  sam.add_hobby("Gaming");
  sam.add_hobby("Anime");
  cout << sam.view_profile() << "\n";
}