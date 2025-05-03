#ifndef AHO_CNODE_H
#define AHO_CNODE_H

class Aho_CNode{
public:
    Aho_CNode** successBranches = nullptr;
    int numBranches = 0;
    Aho_CNode* failLink = nullptr;

    char data;

    /**
     * @brief Aho_CNode - default constructor
     */
    Aho_CNode();

    /**
     * @brief Aho_CNode - constructor
     * @param data - value to set as this node's data
     */
    Aho_CNode(char data);

    void addBranches(char* branches, int numBranches);

    Aho_CNode& operator=(const char);

    bool operator==(const char);

    /**
     * @brief Aho_CNode - default destructor
     */
    ~Aho_CNode();
};


#endif // AHO_CNODE_H
