
#ifndef MATCHEY_STRING_H
#define MATCHEY_STRING_H

// class Mstring{
// 	// matchey libraries
// };
#include <iostream>
#include <vector>

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

#ifndef print
#define print(var) std::cout << #var " : " << var << std::endl
#endif

#endif

