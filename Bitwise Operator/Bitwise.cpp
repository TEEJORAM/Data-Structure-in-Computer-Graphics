#include <iostream>
#include "Bitwise.h"

void Bitwise::PerformOperation(int A, int B)
{
  /*
  BITWISE AND: (A & B)
  1. Each bit of the result is 1 only if corresponding bits of both A and B are 1, otherwise it's 0
  */
  std::cout<<"Bitwise AND: "<<(A & B) <<std::endl;

  /*
  BITWISE OR: (A | B)
  1.Each bit of the result is 1 if either of the corresponding bits of A and B is 1, otherwise it's 0
  */
  std::cout<<"Bitwise OR: "<<(A | B) <<std::endl;

  /*
  BITWISE XOR: (A ^ B)
  1.Each bit of the result is 1 if either of the corresponding bits of A and B are different, otherwise it's 0
  */
  std::cout<<"Bitwise XOR: "<<(A ^ B) <<std::endl;

  /*
  BITWISE NOT: (~A)
  1.It flips each bit of A, turning 1s into 0s and 0s into 1s
  */
  std::cout<<"Bitwise NOT of A: "<<(~A)<<std::endl;
}



int main()
{
  int x = 5, y = 10;
  Bitwise::PerformOperation(x,y);
}