#include "Product.h"


Product::Product(std::string productName, Color color, Size size) : m_productName(productName),
																	m_color(color),
																	m_size(size)
{
}

Product::~Product()
{
}

Color Product::getColor()
{
	return m_color;
}

Size Product::getSize()
{
	return m_size;
}

std::string Product::getProductName()
{
	return m_productName;
}


