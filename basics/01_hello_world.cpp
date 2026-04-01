#include <iostream> // input/output stream library (includes std::cout)

int main() { // main function. int because it returns an integer value. returning 0 conventionally means program executed successfully
    std::cout /* standard output stream */ << /* insertion operator -- send data to output streams*/ "Hello World" << std::endl /* manipulator; inserts newline character */ ;
    return 0; // ends main function and returns 0 to OS, indicating program completed successfully
}