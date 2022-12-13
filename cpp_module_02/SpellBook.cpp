#include "SpellBook.hpp"

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
    for (std::map<std::string, ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++)
    {
        delete it->second;
    }
    this->spells.clear();
}

void SpellBook::learnSpell(ASpell *spell)
{
    if (spell)
        this->spells.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(std::string const &spell)
{
    std::map<std::string, ASpell *>::iterator it = this->spells.find(spell);
    if (it != this->spells.end())
        delete it->second;
    this->spells.erase(spell);
}

ASpell* SpellBook::createSpell(std::string const &spellName)
{
    std::map<std::string, ASpell *>::iterator it = this->spells.find(spellName);
    if (it != this->spells.end())
        return this->spells[spellName];
    return NULL;
}
