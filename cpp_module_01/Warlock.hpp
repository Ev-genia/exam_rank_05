#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include "ASpell.hpp"
# include <map>
# include "ATarget.hpp"

class Warlock
{
private:
    Warlock();
    Warlock &operator=(const Warlock &);
    Warlock(const Warlock &);
    std::string name;
    std::string title;
    std::map<std::string, ASpell *> spells;
public:
    virtual ~Warlock();
    const std::string &getName() const;
    const std::string &getTitle() const;
    void setTitle(const std::string &);
    Warlock(std::string, std::string);
    void introduce() const;

    void    learnSpell(ASpell *);
    void    forgetSpell(std::string);
// * launchSpell, takes a string (a spell name) and a reference to ATarget, that
//   launches the spell on the selected target. If it's not a known spell, does
//   nothing.
    void    launchSpell(std::string, ATarget &);
};

#endif