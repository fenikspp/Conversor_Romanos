//
// Created by pedro henrique ferreira de oliveira on 18/04/19.
//

#ifndef TESTETRABALHO_VALIDAROMANO_HPP
#define TESTETRABALHO_VALIDAROMANO_HPP

#include "ConverteRomano.hpp"
#include "ConverteInteiro.hpp"


bool compara(int inteiro, string romano)
{
    if(romano == ConverteAuxToInteiro((romanToInt(romano))))
    {
        return true;
    } else{
        return false;
    }
}

#endif //TESTETRABALHO_VALIDAROMANO_HPP
