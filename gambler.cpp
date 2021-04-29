#include "gambler.hpp"


Gambler::Gambler(JsonEntityBuilder &builder, JsonItemBuilder & inventory, uint32_t uid) : 
    Entity(builder, inventory, uid)
{
    std::cout << Name() << " the gambler has entered the battle" << std::endl;
}


void Gambler::DiceThrow(Entity * target)
{
    Attack(target, GetLuck() * 0.5, "Dice Throw");
}


void Gambler::PickACard(Entity *target)
{
    Attack(target, GetLuck() * 2.0, "Pick a Card");
}


void Gambler::OutputStatus() const
{
    std::cout << Class() << ": " << this->Name()
                << "\n\tCurrent HP: " << this->CurrentHP()
                << "\n\tLuck: " << this->GetWisdom()
                << std::endl;
                
    PrintInventory();
}

void Gambler::WeaponAttack(Entity * target)
{
    Attack(target, 4.0, "Punch Attack");
}

void Gambler::UseAction(Entity * target, const std::string& spellName, const std::string & args)
{
    if(spellName == "weapon_attack")
    {
        WeaponAttack(target);
        return;
    }
    if(spellName == "dice_throw")
    {
        DiceThrow(target);
        return;
    }
    if(spellName == "pick_a_card")
    {
        PickACard(target);
        return;
    }
    errorFindingAbility(spellName);

}