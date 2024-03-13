#include <iostream>
#include "Queue.h"

//Definition of class Node
Node::Node(int Data)
{
    this->Data = Data;
    this->Next = nullptr;
}

//Definition of class  Queue - Constructor
Queue::Queue()
{
    Front = nullptr;
    Back  = nullptr;
}

//Definition of Destructor
Queue::~Queue()
{
    Node* Temp = nullptr;
    while(Front != nullptr)
    {
        Temp = Front;
        Front = Front->Next;
        delete Temp;
    }
}

//Definition of Member Function - Enqueue Operation
void Queue::Enqueue(int x)
{
    Node* New = new Node(x);
    if(IsEmpty())
    {
        Front = Back = New;
    }
    else
    {
        Back->Next = New;
        Back = New;
    }
}

//Definition of Member Function - Dequeue Operation
int Queue::Dequeue()
{
    if(IsEmpty())
    {
        std::cout<<"Queue is Empty\n";
        return -1;
    }
    int x = Front->Data;
    Node* Temp = Front;
    Front = Front->Next;
    delete Temp;
    return x;
}

//Definition of Member Function - Display Operation
void Queue::Display()
{
    Node* P = Front;
    while(P != nullptr)
    {
        std::cout<<P->Data<<" ";
        P = P->Next;
    }
    std::cout<<std::endl;
}

//Definition of Memeber Function - IsEmpty Operation
bool Queue::IsEmpty()
{
    return Front == nullptr;
}
