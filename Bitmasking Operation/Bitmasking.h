#ifndef BITMASKING_H
#define BITMASKING_H

class BitMasking
{
    public:
      /*
      ApplyMask():
      -> Applies a bitmask to a number, keeping only the bits specified by the mask*/
      static int ApplyMask(int Num, int Mask);
      
      /*
      SetBit():
      -> Sets a specific bit at a given position in a number*/
      static int SetBit(int Num, int Pos);

      /*
      ClearBit():
      -> Clears a specific bit at a given position in a number*/
      static int ClearBit(int Num, int Pos);

      /*
      ToggleBit():
      -> Toggles a specific bit at a given position in a number
      */
      static int ToggleBit(int Num, int Pos);
};


#endif