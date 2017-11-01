#include <iostream>
#ifndef POOL_PONY_HPP
#define POOL_PONY_HPP

class Pony
{
	void setName(std::string name);
	void setAge(unsigned short age);
	void setWeight(unsigned short weight);
	std::string getName();
	unsigned short getAge();
	unsigned short getWeight();

private:
	std::string _name;
	unsigned short _age;
	unsigned short _weight;
};

#endif
