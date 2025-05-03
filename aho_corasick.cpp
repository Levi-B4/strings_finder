#include "aho_corasick.h"

Aho_corasick::Aho_corasick() {
    root = nullptr;
    maxStringLength = 0;
    numStrings = 0;
}

Aho_corasick::Aho_corasick(char** strings, int maxStringLength, int numStrings) {
    root = new Aho_CNode();
    this->maxStringLength = maxStringLength;
    this->numStrings = numStrings;

    root->numBranches = numStrings;
    root->successBranches = new Aho_CNode*[numStrings];

    char* rootBranches = new char[numStrings];
    //TODO: account for repeat starting characters
    //TODO: possibly go vertically through strings instead of horizontal
    for(int i = 0; i < numStrings; i++){
        char newChar = strings[i][0];
        rootBranches[i] = newChar;
    }

    root->addBranches(rootBranches, numStrings);

    delete[] rootBranches;
}

Aho_corasick::~Aho_corasick(){
    delete root;
}
