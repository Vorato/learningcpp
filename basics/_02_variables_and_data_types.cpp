#include <iostream>

// signed -- both positive and negative values (default for int)
// unsighned -- allows only non-negative values
unsigned int positiveNumber = 100; // can only store non-negative values

short int smallNumber = 32767; // reduces size of data type
long int largeNumber = 2147483647; // increases size of data type

// implicit type conversion (automatically convert)
int i = 10;
double d = i; // implicit conversion from int to double
// explicit type casting (manually convert)
double d2 = 3.14;
int i2 = static_cast<int>(d); // convert from double to int

const double pi = 3.14159; // constants can't be changed after initialization

int main() {
    int age = 25;
    double height = 5.9;
    bool isStudent = true;
    
    auto weight = 68.5; // double
    auto name = "Alice"; // const char*
    
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Is Student: " << isStudent << std::endl;
    std::cout << "Weight: " << weight << std::endl;
    std::cout << "Name: " << name << std::endl;
    
    return 0;
}
