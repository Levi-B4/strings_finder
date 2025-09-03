#include "ahoctrie.h"

#include <string>
#include <vector>

AhoCTrie::AhoCTrie(std::vector<std::string>& _patterns) : patterns(_patterns) {
    buildTrie(patterns);
}

AhoCTrie::~AhoCTrie(){

};

void AhoCTrie::buildTrie(const std::vector<std::string> _patterns){

}


std::map<std::string, std::vector<std::pair<int, int>>> AhoCTrie::ProcessText(std::string text){
    return {};
}
