#include <iostream>
#include <vector>
#include <limits>

int main () {
  // for loop: used when number of iterations is known or can be determined
  for (int i = 0 /* initialization */; i < 5 /* condition */; ++i /* add 1 to i then return i; update not run on first iteration*/) {
    std::cout << "Iteration: " << i << std::endl;
  }

  // range-based, iterates over collection (array, vector, etc.)
  std::vector<int> numbers = {1, 2, 3, 4, 5}; // vectors are dynamic (resizable) and slightly slower than arrays
  for (int num : numbers) {
    std::cout << num << " ";
  }
  
  // while: used when it is not known and it continues as long as a condition is true
  int count = 0;
  while (count < 5) {
    std::cout << "Count: " << count << std::endl;
    ++count;
  }
  
  // do-while: similar to while, but the condition is evauated after the loop, meaning the loop always executes at least once
  count = 0;
  do {
    std::cout << "Count: " << count << std::endl;
    ++count;
  } while (count < 5);
  
  // loop control statements
  int a, b;
  std::cout << "Input two numbers :";
  std::cin >> a >> b;
  if (std::cin.fail()) {
    std::cin.clear());
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Please enter a valid number(s)."
    return 0;
  }
  count = 0;
  while (count <= a || count <= b) {
    if (count <= a && count <= b) {
      std::cout << count << std::endl;
      continue;
    } else {
      std::cout << "Your lowest number is " << count << std::endl;
      break;
    }
  }
  return 0;

  // todo nested loops and best practices
}
