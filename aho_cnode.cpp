#include "aho_cnode.h"

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
