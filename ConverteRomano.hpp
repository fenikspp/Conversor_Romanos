//
// Created by pedro on 17/04/19.
//

#ifndef TESTETRABALHO_CONVERTEROMANO_HPP
#define TESTETRABALHO_CONVERTEROMANO_HPP

#include <iostream>
#include <string>

using namespace std;

string ConverteAuxToInteiro(int inteiro)
{

    string romano;
    int pedaco;

    if ((inteiro > 3000) || (inteiro <= 0))
    {

        return "ERRO!";
    }

    else
    {
        //2486
        if (inteiro >= 1000) {
            pedaco = (inteiro / 1000);
            for (int i = 0; i < pedaco; ++i) {
                romano += 'M';
            }
            inteiro %= 1000;
        }

        //486
        if (inteiro >= 100)
        {
            pedaco = (inteiro/100);

            if(pedaco == 9)
            {
                romano += "CM";
            }

            else if (pedaco >= 5)
            {
                romano += 'D';
                for(int i = 0; i < pedaco - 5; i++)
                {
                    romano += 'C';
                }
            }
            else if (pedaco == 4)
            {
                romano += "CD";
            }
            else if(pedaco >= 1)
            {
                for (int i = 0; i < pedaco; ++i)
                {
                    romano +='C';
                }
            }
            inteiro %= 100;
        }

        //86
        if(inteiro >= 10)
        {
            pedaco = (inteiro / 10);

            if(pedaco == 9)
            {
                romano += "XC";
            }
            else if(pedaco >= 5)
            {
                romano += 'L';

                for (int i = 0; i < pedaco -5; ++i)
                {
                    romano += 'X';
                }
            }
            else if(pedaco == 4)
            {
                romano += "XL";
            }
            else if(pedaco >= 1)
            {
                for (int i = 0; i < pedaco; ++i)
                {
                    romano += 'X';
                }
            }
            inteiro %= 10;
        }

        if (inteiro >= 1)
        {
            pedaco = inteiro;

            if(pedaco == 9)
            {
                romano += "IX";
            }
            else if(pedaco >= 5)
            {
                romano += 'V';

                for (int i = 0; i < pedaco - 5; ++i)
                {
                    romano += 'I';
                }
            }

            else if(pedaco == 4)
            {
                romano += "IV";
            }

            else if(pedaco >=1)
            {
                for (int i = 0; i < pedaco; ++i)
                {
                    romano += 'I';
                }
            }

        }

        //cout << "O numero romano é:" << romano <<endl;
    }

    return romano;
}


int ConverteRomanoToInteiro(int inteiro)
{

    if ((inteiro > 3000) || (inteiro <= 0))
    {
        return -1;
    }else{
        ConverteAuxToInteiro(inteiro);
        return 0;
    }

}

#endif //TESTETRABALHO_CONVERTEROMANO_HPP
