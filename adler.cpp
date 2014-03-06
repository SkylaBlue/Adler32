#include <iostream>
#include <string>

typedef unsigned long DWORD;

DWORD adler(std::string &input)
{
	int A = 1, B = 0;
	for (size_t i = 0; i < input.length(); i++)
	{
		int ascii = input.at(i);
		A += ascii;
		B += A % 65521;
	}
	
	return (B << 16) | A;
}

int main()
{
	std::string test = "Hello";
	std::cout << adler(test);
	return 0;
}
