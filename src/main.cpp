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
	// len
	std::cout << characterName.length() << std::endl;
	//char_at
	std::cout << characterName[2] << std::endl;
	// Will tell me where the string occurs
	std::cout << characterName.find("h", 0) << std::endl;
	// substr
	std::cout << characterName.substr(1, 2) << std::endl;

	return 0;
}