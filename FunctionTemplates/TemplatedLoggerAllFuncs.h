#ifndef FUNCTIONTEMPLATES_TEMPLATEDLOGGERALLFUNCS_H
#define FUNCTIONTEMPLATES_TEMPLATEDLOGGERALLFUNCS_H
#include <iostream>
#include <functional>
#include <string>
using namespace std;

namespace TemplatedLoggerAllFuncs
{
    // Partial specialization
    template <typename R, typename... Args>
    struct Logger;

    template <typename R, typename... Args>
    struct Logger<R(Args...)>
    {
        function<R(Args...)> func;
        string name;

        Logger(const function<R(Args...)> &func, const string &name)
        : func(func), name(name) {}

        R operator() (Args... args)
        {
            cout << "Entering function in Templated Logger with all funcs : " << name << endl;
            R result = func(args...); // call to the function
            cout << "Exiting function in Templated Logger with all funcs : " << name << endl;
            return result;
        }
    };

    template <typename R, typename... Args>
    auto make_logger(R(*func)(Args...), const string name)
    {
        return Logger<R(Args...)>(
                function<R(Args...)>(func), name
                );
    }
}
#endif //FUNCTIONTEMPLATES_TEMPLATEDLOGGERALLFUNCS_H
