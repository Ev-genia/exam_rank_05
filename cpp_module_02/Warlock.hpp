#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include "ASpell.hpp"
# include <map>
# include "ATarget.hpp"
# include "SpellBook.hpp"

class Warlock
{
private:
    Warlock();
    Warlock &operator=(const Warlock &);
    Warlock(const Warlock &);
    std::string name;
    std::string title;
    // std::map<std::string, ASpell *> spells;
    SpellBook   spBook;
public:
    virtual ~Warlock();
    const std::string &getName() const;
    const std::string &getTitle() const;
    void setTitle(const std::string &);
    Warlock(std::string, std::string);
    void introduce() const;

    void    learnSpell(ASpell *);
    void    forgetSpell(std::string);
    void    launchSpell(std::string, ATarget &);
};

#endif