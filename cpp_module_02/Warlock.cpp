#include "Warlock.hpp"

Warlock::Warlock(std::string enterName, std::string enterTitle): name(enterName), title(enterTitle)
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done!" << std::endl;
    // for (std::map<std::string, ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++)
    // {
    //     delete it->second;
    // }
    // this->spells.clear();
}

const std::string &Warlock::getName() const
{
    return this->name;
}

const std::string &Warlock::getTitle() const
{
    return this->title;
}

void Warlock::setTitle(const std::string &enterTitle)
{
    this->title = enterTitle;
}

void Warlock::introduce() const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void    Warlock::learnSpell(ASpell *spell)
{
    // if (spell)
    //     this->spells.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
    spBook.learnSpell(spell);
}

void    Warlock::forgetSpell(std::string spellName)
{
    // std::map<std::string, ASpell *>::iterator it = this->spells.find(spellName);
    // if (it != this->spells.end())
    //     delete it->second;
    // this->spells.erase(spellName);
    spBook.forgetSpell(spellName);
}

void    Warlock::launchSpell(std::string spellName, ATarget &target)
{
    // ASpell *spell = this->spells[spellName];
    // if (spell)
    //     spell->launch(target);
    ATarget const *test = 0;
    if (test == &target)
        return ;
    
    ASpell *spell = spBook.createSpell(spellName);
    if (spell)
        spell->launch(target);
}
