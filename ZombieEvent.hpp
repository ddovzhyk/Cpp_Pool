#ifndef POOL_ZOMBIEEVENT_HPP
#define POOL_ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{

public:
	void setZombieType(Zombie &obj, std::string type);
	Zombie* newZombie(std::string name);
	Zombie* randomChump();
private:
	std::string poolNames[5];
};

#endif
