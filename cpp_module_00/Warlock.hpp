#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class Warlock
{
private:
    Warlock();
    Warlock &operator=(const Warlock &);
    Warlock(const Warlock &);
    std::string name;
    std::string title;
public:
    virtual ~Warlock();
    const std::string &getName() const;
    const std::string &getTitle() const;
    void setTitle(const std::string &);
    Warlock(std::string, std::string);
    void introduce() const;
};

#endif