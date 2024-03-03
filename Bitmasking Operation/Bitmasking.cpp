#include <iostream>
#include "Bitmasking.h"

int BitMasking::ApplyMask(int Num, int Mask)
{
    //Bitwise AND Operation with the mask
    return Num & Mask;
}

int BitMasking::SetBit(int Num, int Pos)
{
    //Set the bit at the 'Pos' Position
    return Num | (1<<Pos);
}

int BitMasking::ClearBit(int Num, int Pos)
{
    //Clear the bit at the 'Pos' Position
    return Num & ~(1 << Pos);
}

int BitMasking::ToggleBit(int Num, int Pos)
{
    //Toggle the bit at the 'Pos' Position
    return Num ^ (1 << Pos);
}


int main()
{
   int Num = 10;
   
   //Bitmask to keep only the lower 4 Bits
   int Mask = 0x0F;
   
   //Original Number
   std::cout<<"Original Number: "<<Num<<std::endl;

   //ApplyMask() Function
   std::cout<<"Masked Number: "<<BitMasking::ApplyMask(Num,Mask)<<std::endl;

   // Position
   int Position = 2;

   //SetBit() Function
   std::cout<<"Bit at Position "<<Position<<" Set: "<<BitMasking::SetBit(Num,Position)<<std::endl;

   //ClearBit() Function
   std::cout<<"Bit at Position "<<Position<<" Cleared: "<<BitMasking::ClearBit(Num, Position)<<std::endl;

   //ToggleBit() Function
   std::cout<<"Bit at Position "<<Position<<" Toggled: "<<BitMasking::ToggleBit(Num, Position)<<std::endl;

   return 0;
}