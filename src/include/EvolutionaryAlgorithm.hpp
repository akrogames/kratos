//
// EvolutionaryAlgorithm
// Created by Thibaud Ecarot on 08/10/16.
//

#ifndef KRATOS_EVOLUTIONARYALGORITHM_HPP
#define KRATOS_EVOLUTIONARYALGORITHM_HPP

#include "core/ProcessNode.hpp"
#include "core/Variable.hpp"
#include "variable/RealVariable.hpp"

class EvolutionaryAlgorithm {

public:
    EvolutionaryAlgorithm();
    EvolutionaryAlgorithm(EvolutionaryAlgorithm const &) = default; // Copy constructor
    EvolutionaryAlgorithm(EvolutionaryAlgorithm&&) = default; // Move constructor
    EvolutionaryAlgorithm& operator=(EvolutionaryAlgorithm const &) = default; // Copy assignment operator
    EvolutionaryAlgorithm& operator=(EvolutionaryAlgorithm&&) = default; // Move assignment operator
    ~EvolutionaryAlgorithm() = default; // Destructor


    EvolutionaryAlgorithm* solve();

    const int getNumberOfNucleus();

private:
    int numberOfNucleus;

};

#endif //KRATOS_EVOLUTIONARYALGORITHM_HPP
