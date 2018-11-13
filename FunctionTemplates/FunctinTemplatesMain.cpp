#include <iostream>
#include "SimpleLogger.h"
#include "TemplatedLogger.h"
#include "TemplatedLoggerAllFuncs.h"

double add(double a, double b)
{
    cout << a << "+" << b << " = " << (a+b) << endl;
    return (a+b);
}
int main() {
    SimpleLogger::Logger([](){ std::cout << "Hello, World!" << std::endl;}, "Hello Function")();

    TemplatedLogger::make_logger([](){ std::cout << "Hello, World!" << std::endl;}, "Hello Function")();

    TemplatedLoggerAllFuncs::make_logger(add, "add")(5.0, 6.0);
    return 0;
}