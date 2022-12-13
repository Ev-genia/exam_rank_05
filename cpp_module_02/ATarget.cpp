#include "ATarget.hpp"

ATarget::ATarget()
{
}

ATarget &ATarget::operator=(const ATarget &rhs)
{
    this->type = rhs.type;
    return *this;
}

ATarget::ATarget(const ATarget &src)
{
    *this = src;
}

ATarget::~ATarget()
{
}

const std::string &ATarget::getType() const
{
    return this->type;
}

ATarget::ATarget(std::string enterType)
{
    this->type = enterType;
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
    std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}
