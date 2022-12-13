#include "ASpell.hpp"

ASpell::ASpell()
{}

ASpell  &ASpell::operator=(const ASpell &rhs)
{
    this->name = rhs.name;
    this->effects = rhs.effects;
    return *this;
}

ASpell::ASpell(const ASpell &src)
{
    *this = src;
}

ASpell::~ASpell()
{}

std::string ASpell::getName() const
{
    return this->name;
}

std::string ASpell::getEffects() const
{
    return this->effects;
}

ASpell::ASpell(std::string enterName, std::string enterEffects): name(enterName), effects(enterEffects)
{
}

void ASpell::launch(const ATarget &target)
{
    target.getHitBySpell(*this);
}