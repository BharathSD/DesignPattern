#include <iostream>
#include <string>
using namespace std;

class main
{
	string m_name;


public:
	explicit main(const string& name)
		: m_name(name)
	{
	}
};
int main()
{
	return EXIT_SUCCESS;
}