#include "Zombie.hpp"


void Zombie::setName(std::string name)
{
	_name = name;
}

void Zombie::setType(std::string type)
{
	_type = type;
}

std::string Zombie::getName()
{
	return _name;
}

std::string Zombie::getType()
{
	return _type;
}

void Zombie::annouce()
{
	std::cout << "<" << _name << " (" << _type << ")> " << "Braiiiiiiinnnssss..." << std::endl;
}