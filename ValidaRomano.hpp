//
// Created by pedro henrique ferreira de oliveira on 18/04/19.
//

#ifndef TESTETRABALHO_VALIDAROMANO_HPP
#define TESTETRABALHO_VALIDAROMANO_HPP

#include "ConverteRomano.hpp"
#include "ConverteInteiro.hpp"

//Função que transforma o verifica se o numero inserido pelo usuário é valido
//Essa função recebe o conjuto de caracteres e chama a função que converte os caracteres em um número
//deopis pega o número gerado e transforma novamente em um numero romano(valido) e por fim compara a entrada do usuário
//com o resultado da converteToInteiro.
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
