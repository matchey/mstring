
#ifndef MATCHEY_STRING_H
#define MATCHEY_STRING_H

// class Mstring{
// 	// matchey libraries
// };

namespace m
{

class string : public std::string
{
	public:
		string();
		string(const char *str);
		string(const std::string &s);

		string& operator=(const char *str);
		string& operator=(const std::string& s);
		string operator%(const std::string& s);
};

} // namespace m

std::vector<std::string> split(const std::string&, char);

#endif

