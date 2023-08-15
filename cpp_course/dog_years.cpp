#include <iostream>

int main() {
  
// initialize the age of your dog (must be over two years old)
  int dog_age = 10;
  
// The first two years of a dog’s life count as 21 human years.
  int early_years;
// Each following year counts as 4 human years.
  int later_years = (dog_age - 2) * 4;
// dog's age in human years
  int human_years = early_years + later_years;

  std::cout << "My name is Finja! Ruff ruff, I am " << human_years << " years old in human years." << std::endl; 

}
