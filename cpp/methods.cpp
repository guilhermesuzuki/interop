#include "pch.h"
#include "methods.h"

char* stringToCharPtr(std::string s)
{
	char* array = new char[s.length() + 1];
	for (int i = 0; i < s.length(); i++) array[i] = s[i];
	array[s.length()] = '\0';
	return array;
}

auto DoSomethingWithAStringParameter1(char* in) -> void
{
	std::cout << "in parameter before the change :: " << in << std::endl;
	std::string s(in);

	s += " -> [Example 1] modified by the method";
	in = stringToCharPtr(s);

	std::cout << "in parameter after the change :: " << in << std::endl;
}

auto DoSomethingWithAStringParameter2(char*& out, char* in) -> void
{
	std::cout << "in parameter before the change :: " << in << std::endl;

	std::string s(in);
	s += " -> [Example 2] modified by the method";

	out = stringToCharPtr(s);
}

auto DoSomethingWithAStringParameter3(char* in) -> char*
{
	std::cout << "in parameter before the change :: " << in << std::endl;

	std::string s(in);
	s += " -> [Example 3] modified by the method";

	return stringToCharPtr(s);
}