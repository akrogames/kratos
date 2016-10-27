//
// Created by akrogames on 26/10/16.
//

#ifndef KRATOS_VARIABLE_HPP
#define KRATOS_VARIABLE_HPP


class Variable {

public:
    Variable() = default; // Default constructor
    Variable(Variable const &) = default; // Copy constructor
    Variable(Variable&&) = default; // Move constructor
    Variable& operator=(Variable const &) = default; // Copy assignment operator
    Variable& operator=(Variable&&) = default; // Move assignment operator
    ~Variable() = default; // Destructor

    virtual void randomize();
};


#endif //KRATOS_VARIABLE_HPP
