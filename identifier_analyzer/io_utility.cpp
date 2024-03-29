#include "io_utility.h"

std::ostream& operator<<(std::ostream& out, const std::map<std::string, int>& m)
{
	for (const auto& it : m)
	{
		out << it.first << ' ' << it.second << '\n';
	}
	return out;
}

std::ostream& operator<<(std::ostream& out, std::string& s)
{
	for (const auto& it : s)
	{
		out << s;
	}
	return out;
}

std::ostream& operator<<(std::ostream& out, std::vector<std::string> v)
{
	for (const auto& it : v)
	{
		out << it << '\n';
	}
	return out;
}