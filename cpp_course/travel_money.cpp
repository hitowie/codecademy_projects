#include <iostream>

int main() {
  
  double pesos, reais, soles;
  double dollars;

  std::cout << "Enter number of Colombian Pesos: " << std::endl; 
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: " << std::endl; 
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: " << std::endl; 
  std::cin >> soles;

// current conversion rates:
  double pesos_to_USD = 0.059;
  double reais_to_USD = 0.2;
  double soles_to_USD = 0.27;

 
  dollars = (pesos_to_USD * pesos) + (reais_to_USD * reais) + (soles_to_USD * soles);

  std::cout << "US Dollars = $" << dollars << std::endl;

  return 0; 

}
