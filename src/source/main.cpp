#include <iostream>

#include <EvolutionaryAlgorithm.hpp>

using namespace std;

int main() {
    std::cout << "Running Example...:" << std::endl;

    EvolutionaryAlgorithm ea = EvolutionaryAlgorithm();
    cout << ea.showTest() << endl;

    return 0;
}