#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
    for (std::map<std::string, ATarget *>::iterator it = this->targets.begin(); it != this->targets.end(); it++)
    {
        delete it->second;
    }
    this->targets.clear();
}

void TargetGenerator::learnTargetType(ATarget *target)
{
    if (target)
        this->targets.insert(std::pair<std::string, ATarget *>(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetType(std::string const &target)
{
    std::map<std::string, ATarget *>::iterator it = this->targets.find(target);
    if (it != this->targets.end())
        delete it->second;
    this->targets.erase(target);
}

ATarget* TargetGenerator::createTarget(std::string const &target)
{
    std::map<std::string, ATarget *>::iterator it = this->targets.find(target);
    if (it != this->targets.end())
        return this->targets[target];
    return NULL;
}   
