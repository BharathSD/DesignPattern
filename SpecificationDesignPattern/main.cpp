#include <iostream>
#include <vector>
#include "Product.h"
#include "Specification.h"

using namespace std;

int main()
{
	//create a list of Products
	Product apple("Apple", Color::red, Size::small);
	Product greenapple("Green Apple", Color::green, Size::small);
	Product tree("Tree", Color::green, Size::large);
	Product banana("Banana", Color::yellow, Size::small);

	// Create a list of pointers of Products
	vector<Product*> items{ &apple, &tree, &banana, &greenapple };

	ProductFilter pf;

	cout << "Printing all green items:" << endl;
	// Filter the items according to green color
	colorSpecification green(Color::green);

	for (auto & item : pf.filter(items, green))
		std::cout << item->getProductName() << " is green" << endl;
	
	cout << endl << endl;

	// Filter according to small size
	cout << "Printing all small items:" << endl;
	sizeSpecification small(Size::small);
	for (auto & item : pf.filter(items, small))
		std::cout << item->getProductName() << " is small" << endl;
	cout << endl << endl;

	cout << "Printing all green color and small size items:" << endl;
	// Filter items according to green color and small size
	auto spec = AndSpecification<Product>(green, small);
	for (auto & item : pf.filter(items, spec))
		std::cout << item->getProductName() << " is green and small" << endl;
	cout << endl << endl;
	system("pause");
	return EXIT_SUCCESS;
}