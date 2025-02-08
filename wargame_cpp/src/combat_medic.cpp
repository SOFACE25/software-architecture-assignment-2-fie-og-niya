#include "combat_medic.hpp"

CombatMedic::CombatMedic(int health, int damage) : Soldier(health, damage)
{
}
//Combat Medic will heal target if target isnt dead
void CombatMedic::heal(Unit &target)
{
if (target.get_health() > 0)
    target.set_health(get_health() + 10);
else 
    target.get_health();
}