#include "soldier.hpp"

Soldier::Soldier(int health, int damage) : Unit(health), damage(damage)
{

}
//Target is attacked by soldier
void Soldier::attack(Unit &target)
{
target.take_hit(this->damage);
}

//Soldier cannot heal
void Soldier::heal(Unit &target)
{

}
