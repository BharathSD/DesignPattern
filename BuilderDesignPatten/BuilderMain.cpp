#include <iostream>
#include "HTMLBuilder.h"
using namespace std;

int main()
{
	CHTMLBuilder builder("ul");
	builder.add_child("li", "Hello");
	builder.add_child("li", "World");

	cout << builder.str() << endl;

	cout << "Fluent Builder Types:" << endl;
	CHTMLBuilder builder1("ul");
	builder1.add_child("li", "Hello").add_child("li", "World");

	cout << builder1.str() << endl;

	system("pause");
	return EXIT_SUCCESS;
}