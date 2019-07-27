#include <iostream>

using namespace std;

int main() {
  int year;

  cout << "Input year: ";
  cin >> year;
  cout << "\n";

  if ((year % 4 == 0 || year % 400 == 0) &&
      !(year % 100 == 0 && year % 400 != 0)) {
    cout << "Year " << year << " is a leap year!\n";
  } else {
    cout << "Year " << year << " is not a leap year!\n";
  }
}