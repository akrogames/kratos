//
// Created by akrogames on 09/10/16.
//

#include <iostream>
#include <gtest/gtest.h>

#include <EvolutionaryAlgorithm.hpp>


using namespace std;

TEST(SquareRootTest, NegativeNos) {
    ASSERT_EQ(-1.0, -15.0);
    ASSERT_EQ(-1.0, -1.0);
}

int main(int argc, char **argv) {
    std::cout << "Running Kratos Library tests...:" << std::endl;

    //testing::InitGoogleTest(&argc, argv);
    ::testing::InitGoogleTest(&argc, argv);

/*
    EvolutionaryAlgorithm ea = EvolutionaryAlgorithm();
    std::cout << ea.showTest() << std::endl;
*/
    return RUN_ALL_TESTS();
}