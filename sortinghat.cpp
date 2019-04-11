#include <iostream>

int main() {
  // Initialize variables
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
  int answer1, answer2, answer3, answer4;
  int max = 0;
  std::string house;

  // The magic starts here
  std::cout << "The Sorting Hat Quiz!\n";

  // Question 1
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n"
               "\t1) The Good\n"
               "\t2) The Great\n"
               "\t3) The Wise\n"
               "\t4) The Bold\n";
  std::cin >> answer1;

  // Evaluate answer 1
  if (answer1 == 1) {
    hufflepuff++;
  } else if (answer1 == 2) {
    slytherin++;
  } else if (answer1 == 3) {
    ravenclaw++;
  } else if (answer1 == 4) {
    gryffindor++;
  } else {
    std::cout << "Invalid input.\n";
  }

  // Question 2
  std::cout << "Q2) Dawn or Dusk?\n"
               "\t1) Dawn\n"
               "\t2) Dusk\n";
  std::cin >> answer1;

  // Evaluate answer 2
  if (answer1 == 1) {
    gryffindor++;
    ravenclaw++;
  } else if (answer1 == 2) {
    hufflepuff++;
    slytherin++;
  } else {
    std::cout << "Invalid input.\n";
  }

  // Question 3
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n"
               "\t1) The violin\n"
               "\t2) The trumpet\n"
               "\t3) The piano\n"
               "\t4) The drum\n";
  std::cin >> answer1;

  // Evaluate answer 3
  if (answer1 == 1) {
    slytherin++;
  } else if (answer1 == 2) {
    hufflepuff++;
  } else if (answer1 == 3) {
    ravenclaw++;
  } else if (answer1 == 4) {
    gryffindor++;
  } else {
    std::cout << "Invalid input.\n";
  }

  // Question 4
  std::cout << "Q4) Which road tempts you most?\n"
               "\t1) The wide, sunny grassy lane\n"
               "\t2) The narrow, dark, lantern-lit alley\n"
               "\t3) The twisting, leaf-strewn path through woods\n"
               "\t4) The cobbled street lined (ancient buildings)\n";
  std::cin >> answer1;

  // Evaluate answer 4
  if (answer1 == 1) {
    hufflepuff++;
  } else if (answer1 == 2) {
    slytherin++;
  } else if (answer1 == 3) {
    gryffindor++;
  } else if (answer1 == 4) {
    ravenclaw++;
  } else {
    std::cout << "Invalid input.\n";
  }

  // Decide house
  if (gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
  };

  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  };

  if (ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  };

  if (slytherin > max) {
    max = slytherin;
    house = "Slytherin";
  }

  std::cout << house << "!\n";
}