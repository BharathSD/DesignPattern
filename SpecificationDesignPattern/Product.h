#pragma once
#include <string>
#include "FilterTypes.h"

class Product
{
	std::string m_productName;
	Color m_color;
	Size m_size;
public:
	Product(std::string productName, Color color, Size size);
	~Product();
	Color getColor();
	Size getSize();
	std::string getProductName();
};

