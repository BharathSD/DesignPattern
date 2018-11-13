#include "HTMLElement.h"

using namespace std;

CHTMLElement::CHTMLElement()
{
}


CHTMLElement::~CHTMLElement()
{
}

CHTMLElement::CHTMLElement(const std::string& name, const std::string& text)
	: m_name(name),
	m_text(text)
{
}

std::string CHTMLElement::str(int indent) const
{
	stringstream oss;
	string space(m_indentSize*indent, ' ');

	oss << space << "<" << m_name << ">" << endl;

	if (m_text.size() > 0)
		oss << string(m_indentSize * (indent + 1), ' ') << m_text << endl;

	for (const auto & htmlelements : elements)
		oss << htmlelements.str(indent + 1);

	oss << space << "</" << m_name << ">" << endl;
	return oss.str();
}
