//
// Created by pedro on 17/04/19.
//
#include "ConverteRomano.hpp"
#include "ConverteInteiro.hpp"
#include "ValidaRomano.hpp"
#include <gtest/gtest.h>

TEST(InteiroParaRomano, test1){
    ASSERT_EQ(-1, ConverteRomanoToInteiro(-1));
}

TEST(InteiroParaRomano, test2){
    ASSERT_EQ(0, ConverteRomanoToInteiro(3000));
}

TEST(InteiroParaRomano, test3){
    ASSERT_EQ(0, ConverteRomanoToInteiro(2000));
}

TEST(InteiroParaRomano, test4){
    ASSERT_EQ(-1, ConverteRomanoToInteiro(3001));
}

TEST(InteiroParaRomano, test5){
    ASSERT_EQ("V", ConverteAuxToInteiro(5));
}

TEST(InteiroParaRomano, test6){
    ASSERT_EQ("MMCCXCI", ConverteAuxToInteiro(2291));
}

TEST(RomanoParaInteiro, test1){
    ASSERT_EQ(10, romanToInt("X"));
}

TEST(RomanoParaInteiro, test2){
    ASSERT_EQ(2291, romanToInt("MMCCXCI"));
}

TEST(ValidaRomano, test1){
    ASSERT_FALSE(ConverteAuxToInteiro(40) == "XXXX");
}

TEST(ValidaRomano, test2){
    ASSERT_TRUE(compara(40, "XXXX") == false);
}

TEST(TestaRomano, test1){
    ASSERT_FALSE(romanToInt("XXXX") == 40);
}


int main(int argc, char **argv)
{

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}