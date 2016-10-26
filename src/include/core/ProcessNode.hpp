//
// Created by akrogames on 25/10/16.
//

#ifndef KRATOS_PROCESSNODE_HPP
#define KRATOS_PROCESSNODE_HPP


class ProcessNode {

public:
    ProcessNode() = default; // Default constructor
    ProcessNode(ProcessNode const &) = default; // Copy constructor
    ProcessNode(ProcessNode&&) = default; // Move constructor
    ProcessNode& operator=(ProcessNode const &) = default; // Copy assignment operator
    ProcessNode& operator=(ProcessNode&&) = default; // Move assignment operator
    ~ProcessNode() = default; // Destructor


private:


};


#endif //KRATOS_PROCESSNODE_HPP
