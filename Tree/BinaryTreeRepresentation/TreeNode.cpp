#include <iostream>
#include "TreeNode.h"


//Constructor
//For 'N' Nodes -> There would be 'N + 1' nullptr
TreeNode::TreeNode(int NodeData) : LChild(nullptr),Data(NodeData), RChild(nullptr) { }

//Actuators
TreeNode* TreeNode::getLChild() const { return LChild; }
int TreeNode::getData() const         { return Data; }
TreeNode* TreeNode::getRChild() const { return RChild; }

//Mutators
void TreeNode::SetLChild(TreeNode* Node)  { LChild = Node; }
void TreeNode::setData(int DataValue)     { Data = DataValue;}
void TreeNode::SetRChild(TreeNode* Node)  { RChild = Node; }

int main()
{
    TreeNode RootNode(5);
    TreeNode LChildNode(10);
    TreeNode RChildNode(15);

    //Setting up the Root Node with the Left Child and Right Child
    RootNode.SetLChild(&LChildNode);
    RootNode.SetRChild(&RChildNode);

    //Output:
    std :: cout << "Root Node's Value: " << RootNode.getData() << std::endl;

    //Root Node's -> Left Node's Value
    if(RootNode.getLChild()!=nullptr)
    {
        std::cout<<"Root Node's Left Child Value: "<<RootNode.getLChild()->getData() << std::endl;
    }

    //Root Node's -> Right Node's Value
    if(RootNode.getRChild()!=nullptr)
    {
        std::cout<<"Root Node's Right Child value: "<<RootNode.getRChild()->getData() << std::endl;
    }

    return 0;
}