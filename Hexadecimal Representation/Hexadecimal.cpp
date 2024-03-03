#include <iostream>
#include "Hexadecimal.h"

/*
HEXADECIMAL REPRESENTATION:
1.BASE-16 NOTATION :- Means hexadecimal uses 16 symbols to represent a numbers
2.Symbols ranges from 0 - 9 where A = 10, B = 11,..C = 15
3.Concise representation for Binary Data with each digit representing FOUR BITS
*/


void HexaDecimal::printHexaDecimal(int HexDc){
    std::cout<<"HexaDecimal Value: "<<std::hex<<HexDc<<std::endl;
}

int main()
{
    int A = 0x45; //HexaDecimal Representation
    HexaDecimal::printHexaDecimal(A);
    return 0;
} 