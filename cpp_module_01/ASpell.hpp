#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
protected:
    std::string name;
    std::string effects;
public:
    ASpell();
    ASpell  &operator=(const ASpell &);
    ASpell(const ASpell &);
    virtual ~ASpell();
    std::string getName() const;
    std::string getEffects() const;
    virtual ASpell *clone() const = 0;
    ASpell(std::string, std::string);
    // launch function that takes a reference to constant ATarget.
    void launch(const ATarget &);
};

#endif
