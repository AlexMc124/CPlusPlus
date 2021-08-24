#include <iostream>
#include <string>

int main()
{
	std::string characterName = "John";
	int age = 70;
	std::cout << "There once was a man named " << characterName << std::endl;
	std::cout << "He was " << age << " years old" << std::endl;
	std::cout << "He liked the name " << characterName << std::endl;
	std::cout << "He did not like being " << age << std::endl;

	return 0;
}