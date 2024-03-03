#include <iostream>
#include "Bitwise.h"

void Bitwise::PerformOperation(int A, int B)
{
  std::cout<<"Bitwise AND: "<<(A & B) <<std::endl;
  std::cout<<"Bitwise OR: "<<(A | B) <<std::endl;
  std::cout<<"Bitwise XOR: "<<(A ^ B) <<std::endl;
  std::cout<<"Bitwise NOT of A: "<<(~A)<<std::endl;
}



int main()
{
  int x = 5, y = 10;
  Bitwise::PerformOperation(x,y);
}