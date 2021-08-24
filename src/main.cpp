#include <iostream>
#include <string>
#include <cmath>

int main()
{
	std::string characterName = "John";
	int characterAge = 70;
	std::cout << "There once was a man named " << characterName << std::endl;
	std::cout << "He was " << characterAge << " years old" << std::endl;
	std::cout << "He liked the name " << characterName << std::endl;
	std::cout << "He did not like being " << characterAge << std::endl;

	// working with strings
	// len
	std::cout << characterName.length() << std::endl;
	//char_at
	std::cout << characterName[2] << std::endl;
	// Will tell me where the string occurs
	std::cout << characterName.find("h", 0) << std::endl;
	// substr
	std::cout << characterName.substr(1, 2) << std::endl;

	// working with numbers
	// ints
	std::cout << 5 + 7 << std::endl;
	std::cout << 5 * 7 << std::endl;
	std::cout << 5 / 7 << std::endl;
	std::cout << 5 - 7 << std::endl;
	std::cout << pow(5, 7) << std::endl;
	// doubles
	std::cout << 5.02 + 7.92 << std::endl;
	// extra operatiosn
	int wnum = 80;
	wnum /= 5;
	std::cout << wnum << std::endl;

	// getting User Input
	int userAge;
	std::string userName;
	std::cout << "Enter your age : " << std::endl;
	std::cin >> userAge;
	std::cout << "Enter your name : " << std::endl;
	std::getline(std::cin, userName);
	std::cout << "Your name is " << userName << " and you are " << userAge << " years old" << std::endl;

	return 0;
}