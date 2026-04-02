#include <iostream>
#include <limits>

int main() {
  
  // if, else if, else,
  int age;
  std::cout << "Enter your age: ";
  std::cin >> age;
  if (std::cin.fail()) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Please input a number." << std::endl;
    return 0;
  }
  if (age >= 18) { // condition must evaluate to a boolean value
    std::cout << "You are an adult." << std::endl;
  } else if (age >= 13) {
    std::cout << "You are a teenager." << std::endl;
  } else {
    std::cout << "You are a child." << std::endl;
  }

  // switch
  int day;
  std::cout << "Enter the day of the week (number): ";
  std::cin >> day;
  if (std::cin.fail()) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cerr << "Please input a number." << std::endl;
    return 0;
  }
  char prefix[] = "It is ";
  switch (day) {
    case 1:
      std::cout << prefix << "Sunday." << std::endl;
      break;
    case 2:
      std::cout << prefix << "Monday  ." << std::endl;
      break;
    case 3:
      std::cout << prefix << "Tuesday." << std::endl;
      break;
    case 4:
      std::cout << prefix << "Wednesday." << std::endl;
      break;
    case 5:
      std::cout << prefix << "Thursday" << std::endl;
      break;
    case 6:
      std::cout << prefix << "Friday." << std::endl;
      break;
    case 7:
      std::cout << prefix << "Saturday." << std::endl;
      break;
    default:
      std::cout << "Enter a number 1-7" << std::endl;
  }

  /* best practices

  1. use braces even if they only contain one statement
  2. avoid deep nesting for readability
  3. use switch when comparing single variable against multiple values
  4. always include a default case in switch
  
  */
  return 0;
}
