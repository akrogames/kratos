//
// Created by akrogames on 26/10/16.
//

#ifndef KRATOS_REALVARIABLE_HPP
#define KRATOS_REALVARIABLE_HPP

#include "core/Variable.hpp"

class RealVariable: public Variable {
public:
    RealVariable() = default; // Default constructor
    RealVariable(RealVariable const &) = default; // Copy constructor
    RealVariable(RealVariable&&) = default; // Move constructor
    RealVariable& operator=(RealVariable const &) = default; // Copy assignment operator
    RealVariable& operator=(RealVariable&&) = default; // Move assignment operator
    ~RealVariable() = default; // Destructor


};


#endif //KRATOS_REALVARIABLE_HPP
