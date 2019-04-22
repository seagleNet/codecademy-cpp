#include <iostream>
#include <vector>

int main() {

  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};

  // Add more

  grocery.push_back("Tampons");
  grocery.push_back("Panties");

  std::cout << grocery.size() << "\n";
}