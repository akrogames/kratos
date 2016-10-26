#include <iostream>

#include <EvolutionaryAlgorithm.hpp>

using namespace std;

int main() {
    std::cout << "Running Example...:" << std::endl;

    /**
     * DEFINE PROBLEM CLASS + INTERFACE + Inheritance
     */

    EvolutionaryAlgorithm* ea = EvolutionaryAlgorithm().solve();

    return 0;
}