#include <iostream>
#include <cmath>

int main() {
  
  double a, b, c;

  std::cout << "Enter a: " << std::endl;
  std::cin >> a;

  std::cout << "Enter b: " << std::endl;
  std::cin >> b;  
  
  std::cout << "Enter c: " << std::endl;
  std::cin >> c; 

  double root1, root2;

  root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2 * a);

  root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2 * a);

  std::cout << "root1 = " << root1 << std::endl; 
  std::cout << "root2 = " << root2 << std::endl; 

  return 0;

}
