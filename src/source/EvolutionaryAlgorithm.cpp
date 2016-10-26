//
// Created by akrogames on 08/10/16.
//

#include <EvolutionaryAlgorithm.hpp>

EvolutionaryAlgorithm::EvolutionaryAlgorithm() {
    this->numberOfNucleus = 100;
}

EvolutionaryAlgorithm* EvolutionaryAlgorithm::solve() {
    try {
        RealVariable rv = RealVariable();
    } catch ( ... ) {

    }

    return this;
}

const int EvolutionaryAlgorithm::getNumberOfNucleus() {
    return this->numberOfNucleus;
}