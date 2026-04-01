#include <iostream>
#include <iomanip> // For std::setw and std::setprecision
#include <limits> // For std::numeric_limits

int main() {
    // output
    std::cout << "data" /* output data to console. instance of std::ostream. << is called insertion operator and sends data to output stream */ << std::endl;
    // chained output
    unsigned int q = 4;
    std::cout << "The value of q is: " << q << std::endl;

    // input
    // std::cin >> variable;
    int age;
    std::cout << "Enter age: ";
    std::cin >> age;
    std::cout << "You are " << age << " years old." << std::endl;
    // chained input
    int x, y;
    std::cout << "Enter two numbers: ";
    std::cin >> x >> y;
    std::cout << "Entered: " << x << " and " << y << std::endl;
    // input error handling
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    if (std::cin.fail()) {
        // clear the error state and ignore invalid input
        std::cin.clear(); // clear error state
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore input (inner area specifies max number of characters to ignore, stopping at \n (newline))
        std::cerr << "Invalid input! Please enter a number." << std::endl;
    } else {
        std::cout << "You entered: " << number << std::endl;
    }

    // formatted output
    // set precision
    double pi = 3.141592653589793;
    std::cout << "Pi to 3 decimal places: " << std::setprecision(3) << pi << std::endl;
    // aligning text
    std::cout << std::setw(10) << "Hello" << std::setw(10) << "World" << std::endl;
    return 0;
}
