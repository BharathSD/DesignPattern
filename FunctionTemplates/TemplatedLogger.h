#ifndef FUNCTIONTEMPLATES_TEMPLATEDLOGGER_H
#define FUNCTIONTEMPLATES_TEMPLATEDLOGGER_H
#include <iostream>
#include <functional>
#include <string>
using namespace std;


namespace TemplatedLogger {
    template<typename Func>
    struct Logger {
        Func func;
        string name;

        Logger(const Func &func, const string &name) : func(func),
                                                       name(name) {}

        // overload function call operator
        void operator()() const {
            cout << "Entering function in Templated Logger : " << name << endl;
            func(); // call to the function
            cout << "Exiting function in Templated Logger : " << name << endl;
        }
    };

    template <typename Func>
    auto make_logger(Func func, const string name)
    {
        return Logger<Func>(func, name);
    }
}
#endif //FUNCTIONTEMPLATES_TEMPLATEDLOGGER_H
