#include <iostream>
#include "BitwiseShift.h"
/*
LEFT SHIFT OPERATOR
1."<<" shifts the bits of a number to the left by a specified number of position
2.Example: If a number is '10' (Binary: '1010') -> After num<<1 results in 20
3.Means Left Shift operations initialized as 'Multiplying by 2'
*/
int BitwiseOperator::LeftShiftOperator(int Num)
{
    return Num<<1; //Left Shift by 1
}


/*
RIGHT SHIFT OPERATOR
1.">>" shifts the bits of a number to the right by a specified number of position
2.Example: If a number is '10' (Binary: '1010') -> After num>>1 results in 5
3.Means Right shift operation initialized as 'Dividing by 2'
*/
int BitwiseOperator::RightShiftOperator(int Num)
{
    return Num>>1; 
}

int main()
{
  int Num = 10;
  std::cout<<"Left Shift by 1: "<<BitwiseOperator::LeftShiftOperator(Num)<<std::endl;
  std::cout<<"Right Shift by 1: "<<BitwiseOperator::RightShiftOperator(Num)<<std::endl;
  return 0;
}