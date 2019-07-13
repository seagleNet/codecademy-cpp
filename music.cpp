#include <iostream>
#include "song.hpp"
using namespace std;

int main() {
  Song back_to_black("Back to Black", "Amy Winehouse");
  cout << back_to_black.get_title() << "\n";
  cout << back_to_black.get_artist() << "\n";
}