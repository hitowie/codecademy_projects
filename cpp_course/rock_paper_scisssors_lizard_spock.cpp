/* Rock, Paper, Scissors, Lizard, Spock
 * 
 * Scissors cuts Paper
 * Paper covers Rock
 * Rock crushes Lizard
 * Lizard poisons Spock
 * Spock smashes Scissors
 * Scissors decapitates Lizard
 * Lizard eats Paper
 * Paper disproves Spock
 * Spock vaporizes Rock
 * (and as it always has) Rock crushes Scissors
*/

#include <iostream>
#include <stdlib.h>

int main () {

// random number for computer choice
  srand(time(NULL));
  int computer = rand() % 5 + 1;
  int user = 0;

// prompt the user to select either rock, paper, scissors, lizard or spock
  std::cout << "Choose one of the following:\n";
  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n\n";
  std::cout << "Rock, Paper, Scissors, Lizzard, Spock...\n\n";

  std::cin >> user;

// comparing computer and user input to determine winner

// user chose rock
  if (user == 1) {
    if (computer == 3) {
      std::cout << "Rock crushes Scissors => You win!\n";
    }
    else if (computer == 4) {
      std::cout << "Rock crushes Lizard => You win!\n";
    }
    else if (computer == 2) {
      std::cout << "Paper covers Rock => You lose!\n";
    }
    else if (computer == 5) {
      std::cout << "Spock vaporizes Rock => You lose!\n";
    }
    else {
      std::cout << "Rock vs Rock => It's a draw!\n";
    }
  }
// user chose paper
  else if (user == 2) {
    if (computer == 1) {
      std::cout << "Paper covers Rock => You win!\n";
    }
    else if (computer == 5) {
      std::cout << "Paper disproves Spock => You win!\n";
    }
    else if (computer == 3) {
      std::cout << "Scissors cuts Paper => You lose!\n";
    }
    else if (computer == 4) {
      std::cout << "Lizard eats Paper => You lose!\n";
    }
    else {
      std::cout << "Paper vs Paper => It's a draw!\n";
    }
  }
// user chose scissors
  else if (user == 3) {
    if (computer == 2) {
      std::cout << "Scissors cuts Paper => You win!\n";
    }
    else if (computer == 4) {
      std::cout << "Scissors decapitates Lizard => You win!\n";
    }
    else if (computer == 1) {
      std::cout << "Rock crushes Scissors => You lose!\n";
    }
    else if (computer == 5) {
      std::cout << "Spock smashes Scissors => You lose!\n";
    }
    else {
      std::cout << "Scissors vs Scissors => It's a draw!\n";
    }
  }
// user chose lizard
  else if (user == 4) {
    if (computer == 2) {
      std::cout << "Lizard eats Paper => You win!\n";
    }
    else if (computer == 5) {
      std::cout << "Lizard poisons Spock => You win!\n";
    }
    else if (computer == 1) {
      std::cout << "Rock crushes Lizard => You lose!\n";
    }
    else if (computer == 3) {
      std::cout << "Scissors decapitates Lizard => You lose!\n";
    }
    else {
      std::cout << "Lizard vs Lizard => It's a draw!\n";
    }
  }
// user chose spock
  else if (user == 5) {
    if (computer == 1) {
      std::cout << "Spock vaporizes Rock => You win!\n";
    }
    else if (computer == 3) {
      std::cout << "Spock smashes Scissors => You win!\n";
    }
    else if (computer == 2) {
      std::cout << "Paper disproves Spock => You lose!\n";
    }
    else if (computer == 4) {
      std::cout << "Lizard poisons Spock => You lose!\n";
    }
    else {
      std::cout << "Spock vs Spock => It's a draw!\n";
    }
  }
// invalid user input
  else {
    std::cout << "invalid input\n";
  }

  return 0;
  
}
