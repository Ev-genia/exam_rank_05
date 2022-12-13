#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <map>
# include "ATarget.hpp"

class TargetGenerator
{
private:
    TargetGenerator &operator=(const TargetGenerator &);
    TargetGenerator(const TargetGenerator &);
    std::map<std::string, ATarget *>    targets;
public:
    TargetGenerator();
    virtual ~TargetGenerator();

    void learnTargetType(ATarget *);
// * void forgetTargetType(string const &), that makes the generator forget a
//   target type if it's known
    void forgetTargetType(std::string const &);
// * ATarget* createTarget(string const &), that creates a target of the
//   specified type
    ATarget* createTarget(std::string const &);
};



#endif