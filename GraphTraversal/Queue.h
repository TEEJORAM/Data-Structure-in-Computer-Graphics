#ifndef QUEUE_H
#define QUEUE_H
#include "Node.h"

//Representation of class QUEUE
class Queue
{
  private:
    //Data Member
    Node* Front;
    Node* Back;

  public:
    //Constructor
    Queue();

    //Destructor
    ~Queue();

    //Member Function
    void Enqueue(int x);
    int Dequeue();
    void Display();
    bool IsEmpty();
};

#endif