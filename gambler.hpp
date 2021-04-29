#ifndef GAMBLER_HPP
#define GAMBLER_HPP

#include "JsonEntityBuilder.hpp"
#include "entity.hpp"


class Gambler : public Entity
{
private:

    void DiceThrow(Entity * target);
    void PickACard(Entity * target);


public:
    Gambler(JsonEntityBuilder &builder, JsonItemBuilder & inventory, uint32_t uid);

    virtual void OutputStatus() const override;
    virtual void WeaponAttack(Entity * target) override;

    virtual void UseAction(Entity * target, const std::string& spellName, const std::string & args) override;


};



#endif