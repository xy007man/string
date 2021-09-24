#include "String.h"
#include <iostream>
#include <string.h>

String::String(const char *str)
{
	if (str == nullptr) {
		m_data = new char[1];
		m_data[0] = '\0';
		return;
	}
	int len = strlen(str);
	m_data = new char[len + 1];
	strcpy(m_data, str);
}

String::String(const String &str)
{
	int len = strlen(str.m_data);
	m_data = new char[len + 1];
	strcpy(m_data, str.m_data);
}

String::String(String &&str)
{
	if (this == &str) {
                return;
        }
	if (m_data != nullptr) {
		delete[] m_data;
	}
        m_data = str.m_data;
        str.m_data = nullptr;
}

String::~String()
{
	delete[] m_data;
	m_data = nullptr;
}

String& String::operator=(const String &str)
{
	if (this == &str) {
		return *this;
	}

	if (m_data != nullptr) {
		delete[] m_data;
	}	

	int len = strlen(str.m_data);
	m_data = new char[len + 1];
	strcpy(m_data, str.m_data);

	return *this;
}

String& String::operator+=(const String &str)
{
	int len = strlen(str.m_data) + strlen(m_data) + 1;
	char *tmp = new char[len + 1];
	
	strcpy(tmp, m_data);
	strcat(tmp, str.m_data);

	delete[] m_data;
	m_data = tmp;

	return *this;
}

String& String::operator=(String &&str)
{
	if (this == &str) {
		return *this;
	}
	delete[] m_data;
	m_data = str.m_data;
	str.m_data = nullptr;

	return *this;
}

const char *String::c_str()
{
	return m_data;
}

String& String::reverse()
{
	int startIdx = 0;
	int endIdx = strlen(m_data) - 1;

	while (startIdx < endIdx) {
		std::swap(m_data[startIdx++], m_data[endIdx--]);
	}

	return *this; 
}

std::list<String> String::split(char c)
{
	std::list<String> l;
	char str[2] = {c, 0};
	
	int len = strlen(m_data);
	char *p = strtok(m_data, str);
	
	while (p) {
		String s(p);
		l.emplace_back(s);
		p = strtok(NULL, str);
	}	

	return l;
}
