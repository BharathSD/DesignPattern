#pragma once
#include <string>
#include <vector>
#include <sstream>
class CHTMLElement
{

public:
	CHTMLElement();
	~CHTMLElement();

	std::string m_name, m_text;
	std::vector<CHTMLElement> elements;

	const int m_indentSize = 2;


	CHTMLElement(const std::string& name, const std::string& text);

	std::string str(int indent = 0) const;
};

