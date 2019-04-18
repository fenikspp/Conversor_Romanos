//
// Created by pedro henrique ferreira de oliveira on 18/04/19.
//

#ifndef TESTETRABALHO_CONVERTEINTEIRO_HPP
#define TESTETRABALHO_CONVERTEINTEIRO_HPP

#include "ConverteRomano.hpp"


//Função que retorna o valor dos caracteres romanos.
int value(char roman)
{
    switch(roman)
    {
        case 'I':return 1;
        case 'V':return 5;
        case 'X':return 10;
        case 'L':return 50;
        case 'C':return 100;
        case 'D':return 500;
        case 'M':return 1000;
    }
}

//Função que converte um conjunto de caracteres romanos em um numero inteiro.
int romanToInt (string A)
{
    int i, n, inteiro=0, p=0;
    n=A.length()-1;

    for( i=n; i>=0; i--)
    {
        if( value(A[i]) >= p)
            inteiro = inteiro + value(A[i]);
        else
            inteiro = inteiro - value(A[i]);

        p = value(A[i]);
    }

    if (A == ConverteAuxToInteiro(inteiro))
    {
        return inteiro;
    }else{
        return -1;
    }

}


#endif //TESTETRABALHO_CONVERTEINTEIRO_HPP
