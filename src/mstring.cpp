
#include <sstream>
#include "mstring/mstring.h"

namespace m
{

	string::string() : std::string() {}
	string::string(const char *str) : std::string(str) {}
	string::string(const std::string &s) : std::string(s) {}

	string& string::operator=(const char *str) 
	{
		std::string::operator=(str);
		return *this;
	}

	string& string::operator=(const std::string& s) 
	{
		std::string::operator=(s);
		return *this;
	}

	string string::operator%(const std::string& s) 
	{
		string rtn = *this;
		unsigned int pos = this->rfind(s);

		if( pos != std::string::npos){
			rtn.erase(rtn.begin()+pos, rtn.end());
		}

		return rtn;
	}

} // namespace m

std::vector<std::string> split(const std::string &str, char sep)
{
	std::vector<std::string> v;
	std::stringstream ss(str);
	std::string buffer;
	while( getline(ss, buffer, sep) ) {
		v.push_back(buffer);
	}
	return v;
}

