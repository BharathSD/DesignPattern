#pragma once
#include "HTMLElement.h"
#include <string>

class CHTMLBuilder
{
	CHTMLElement m_root; // root of the HTML element

public:
	explicit CHTMLBuilder(std::string rootName);
	~CHTMLBuilder();

	CHTMLBuilder& add_child(std::string childName, std::string childText);

	std::string str() const;
};

