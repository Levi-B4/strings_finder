#ifndef AHO_CORASICK_H
#define AHO_CORASICK_H

#include "aho_cnode.h"
class Aho_corasick
{
public:
    /**
     * @brief Aho_corasick - default constructor
     */
    Aho_corasick();

    /**
     * @brief Aho_corasick - constructor which builds the data structure from given string array
     * @param strings - strings to create data structure
     * @param stringMaxsize - max size of strings
     * @param numStrings - number of strings in array
     */
    Aho_corasick(char** strings, int maxStringLength, int numStrings);

    // may need to change output
    char* processChar(char data);

    /**
     * @brief ~Aho_corasick - default destructor
     */
    ~Aho_corasick();

private:
    Aho_CNode* root = nullptr;
    char** strings = nullptr;
    int numStrings = 0;
    int maxStringLength = 0;
};

#endif // AHO_CORASICK_H
