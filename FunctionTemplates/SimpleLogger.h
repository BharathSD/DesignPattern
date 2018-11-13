#ifndef FUNCTIONTEMPLATES_SIMPLELOGGER_H
#define FUNCTIONTEMPLATES_SIMPLELOGGER_H

#include <iostream>
#include <functional>
#include <string>
using namespace std;

namespace SimpleLogger
{
    // Simple logger which logs functions which has a return type void and accepts no arguments
    struct Logger
    {
        function<void()> func;
        string name;

        Logger(const function<void()> &func, const string &name) : func(func),
                        name(name) {}

        // overload function call operator
        void operator() ()const
        {
            cout << "Entering function in Simple Logger : " << name << endl;
            func(); // call to the function
            cout << "Exiting function in Simple Logger : " << name << endl;
        }
    };
}
#endif //FUNCTIONTEMPLATES_SIMPLELOGGER_H
