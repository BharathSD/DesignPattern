#include "HTMLBuilder.h"


CHTMLBuilder::CHTMLBuilder(std::string rootName)
{
	m_root.m_name = rootName;
}

CHTMLBuilder::~CHTMLBuilder()
{
}

CHTMLBuilder& CHTMLBuilder::add_child(std::string childName, std::string childText)
{
	CHTMLElement e(childName, childText);

	m_root.elements.emplace_back(e);
	return *this;
}

std::string CHTMLBuilder::str() const
{
	return m_root.str();
}
