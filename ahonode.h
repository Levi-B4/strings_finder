#ifndef AHONODE_H
#define AHONODE_H

#include <string>
#include <map>

class AhoNode
{
public:
    explicit AhoNode(char _value);
    ~AhoNode();

    char value;
    int patternIndex = -1;

    AhoNode* failLink = nullptr;
    std::map<char, AhoNode*> children{};

    std::string word = "";
};

#endif // AHONODE_H
