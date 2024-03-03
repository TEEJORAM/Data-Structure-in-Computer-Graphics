#ifndef BITWISE_H
#define BITWISE_H

class Bitwise
{
    public:
      /*
      USE OF STATIC IN THE MEMBER FUNCTION:
      1.Used to declare function belonging to the class itself,not requiring to creaete an instance
      2.Encapsulates the functionality within the class namespace
      3.Enables Direct invocation without an object
      */
      static void PerformOperation(int A, int B);
};

#endif