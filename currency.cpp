#include <iostream>

int main() {
  // delcare vars for currencies
  double pesos, reais, soles, dollars;

  // query user for currency amounts
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  // set conversion rates
  double p_conv = 0.052;
  double r_conv = 0.26;
  double s_conv = 0.3;

  // calculate amount of dollars
  dollars = (pesos * p_conv) + (reais * r_conv) + (soles * s_conv);

  // output total amount of dollars
  std::cout << "US Dollars = $" << dollars << "\n";
}