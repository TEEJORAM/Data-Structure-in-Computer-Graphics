#ifndef TREENODE_H
#define TREENODE_H

//Binary Tree Node Representation
class TreeNode
{
    private:
      TreeNode* LChild; //Left Child
      int Data; 
      TreeNode* RChild; //Right Child

    public:
       //Default & Parameterized constructor to initialize the Data Node and assign the LChild & RChild to "NULLPTR
       TreeNode(int NodeData);

       //Getter - Actuators - To Read/Access the value
       /*Reason to use 'const in the member function:
        ->Used in the member function to ensure that the function doesn't change any of the object's Variable/Data
        ->Const objects that are declared inside the function are UNCHANGEABLE*/
       TreeNode* getLChild() const;
       int getData() const;
       TreeNode* getRChild() const;


       //Setter - Mutators - To update the value
       void SetLChild(TreeNode* Node);
       void setData(int DataValue);
       void SetRChild(TreeNode* Node);


       //Traversal
       //1.Preorder   : Node - LeftSubTree - RightSubTree
       //2.Inorder    : LeftSubTree - Node - RightSubTree
       //3.Postorder  : LeftSubTree - RightSubTree - Node
       //4.Levelorder : Level by Level - Visit the Node
};

#endif

