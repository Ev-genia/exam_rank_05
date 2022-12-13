#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <map>
# include "ASpell.hpp"

class SpellBook
{
private:
    SpellBook   &operator=(const SpellBook &);
    SpellBook(const SpellBook &);
    std::map<std::string, ASpell *> spells;
public:
    SpellBook();
    virtual ~SpellBook();
    void learnSpell(ASpell *);
    void forgetSpell(std::string const &);
    ASpell* createSpell(std::string const &);
};

#endif