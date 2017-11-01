#include "Pony.hpp"

void Pony::setName(std::string name)
{
	_name = name;
}

void Pony::setAge(unsigned short age)
{
	_age = age;
}

void Pony::setWeight(unsigned short weight)
{
	_weight = weight;
}

std::string Pony::getName()
{
	return _name;
}

unsigned short Pony::getAge()
{
	return _age;
}

unsigned short Pony::getWeight()
{
	return _weight;
}