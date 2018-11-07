#pragma once
#include <vector>
#include "Product.h"

template<typename T>
struct Specification
{
	virtual bool is_satisfied(T* item) = 0;
};

template<typename T>
struct IFilter
{
	virtual std::vector<T*> filter(	std::vector<T*> items,
								Specification<T> & spec) = 0;
};

struct ProductFilter : public IFilter<Product>
{
	// Inherited via IFilter
	std::vector<Product*> filter(	std::vector<Product*> items,
											Specification<Product>& spec) override
	{
		std::vector<Product*> result;

		for (auto item : items)
			if (spec.is_satisfied(item))
				result.push_back(item);
		return result;
	}
};

template<typename T>
struct AndSpecification : Specification<T>
{
	Specification<T> &m_first;
	Specification<T> &m_second;

	AndSpecification(Specification<T> &first, Specification<T> &second):m_first(first),
																		m_second(second)
	{}



	virtual bool is_satisfied(T* item) override
	{
		return m_first.is_satisfied(item) && m_second.is_satisfied(item);
	}

};

struct colorSpecification : Specification<Product>
{
	Color m_color;


	colorSpecification(Color color) : m_color(color)
	{}
	virtual bool is_satisfied(Product* item) override
	{
		return item->getColor() == m_color;
	}

};

struct sizeSpecification : Specification<Product>
{
	Size m_size;
	sizeSpecification(Size size): m_size(size)
	{
	}


	virtual bool is_satisfied(Product* item) override
	{
		return item->getSize() == m_size;
	}

};