#ifndef AHO_CNODE_H
#define AHO_CNODE_H

class Aho_CNode{
public:
    Aho_CNode* successLink;
    Aho_CNode* failLink;

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

    Aho_CNode& operator=(const char);

    bool operator==(const char);

    /**
     * @brief Aho_CNode - default destructor
     */
    ~Aho_CNode();
};

/**
 * @brief Aho_CNode::Aho_CNode default constructor
 */
Aho_CNode::Aho_CNode(){

}

/**
 * @brief Aho_CNode::Aho_CNode - constructor
 * @param data - data value of node
 */
Aho_CNode::Aho_CNode(char data){
    this->data = data;
}

/**
 * @brief Aho_CNode::operator = - sets data of node
 * @param data - data value of node
 * @return
 */
Aho_CNode& Aho_CNode::operator=(const char data){
    this->data = data;
    return *this;
}

/**
 * @brief Aho_CNode::operator == - returns true if data of node and param data are equal
 * @param data - value to compare node data against
 * @return
 */
bool Aho_CNode::operator==(const char data){
    return this->data == data;
}

/**
 * @brief Aho_CNode::~Aho_CNode - default destructor
 */
Aho_CNode::~Aho_CNode(){

}


#endif // AHO_CNODE_H
