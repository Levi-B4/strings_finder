#include "aho_corasick.h"
#include <cstring>

using namespace std;

int main()
{
    // should maybe make max word size global or figure something out for how I want to set this
    const int maxWordSize = 50;
    const int numWords = 4;
    const char* initWords[] = {"cat", "cab", "able", "bleed"};

    char** words = new char*[numWords];
    for (int i = 0; i < numWords; ++i) {
        words[i] = new char[maxWordSize];
        strncpy(words[i], initWords[i], maxWordSize);
    }

    Aho_corasick mytree = Aho_corasick(words, maxWordSize, numWords);

    delete[] words;
}
