#ifndef POOL_ZOMBIE_HPP
#define POOL_ZOMBIE_HPP

#include <iostream>

class Zombie
{

public:
	void setName(std::string name);
	void setType(std::string type);
	std::string getName();
	std::string getType();
	void annouce();
private:
	std::string _name;
	std::string _type;
};

#endif
