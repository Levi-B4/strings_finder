#ifndef AHOCTRIE_H
#define AHOCTRIE_H

#include "ahonode.h"

#include <string>
#include <vector>
#include <map>
#include <utility>


class AhoCTrie
{
private:
    std::vector<std::string> patterns{};
    AhoNode* root = nullptr;

    void buildTrie(const std::vector<std::string> _patterns);

public:
    AhoCTrie(std::vector<std::string>& _patterns);
    ~AhoCTrie();

    std::map<std::string, std::vector<std::pair<int, int>>> ProcessText(std::string text);
};

#endif // AHOCTRIE_H
