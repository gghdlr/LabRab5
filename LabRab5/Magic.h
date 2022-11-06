#pragma once
#include "Weapon.h"
class Magic :
    public Weapon
{
private:
    float magicDamage;
public:
    Magic(string name, int damage, int weight, string type, int magicDamage);
    int getMagicDamage();
    void magic();
    void takeDamage() override;
    Magic();
    int com() override;
    void com2(int y, int y1, int y2) override;
};

