#ifndef __string__
#define __string__
#include <list>

class String {
public:
	String(const char *str = nullptr); 
	String(const String &);
	String(String &&);

	~String();

	String& operator=(const String &);
	String& operator=(String &&);
	String& operator+=(const String &);
	const char *c_str();
	String& reverse();
	std::list<String> split(char);
private:
	char *m_data;
};

#endif
