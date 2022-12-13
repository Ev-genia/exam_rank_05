#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
private:
    std::string type;
public:
    ATarget();
    ATarget &operator=(const ATarget &);
    ATarget(const ATarget &);
    virtual ~ATarget();
    const std::string &getType() const;
    virtual ATarget *clone() const = 0;
    ATarget(std::string);
    void getHitBySpell(const ASpell &) const;
};

#endif