#pragma once

class BinarySearchTree
{
public:
    BinarySearchTree* leftSubTree;
    BinarySearchTree* rightSubTree;
    BinarySearchTree* rootNode;
    int data;
    
    void InsertNode(int data);
    void PreOrderTraversal();
    void InOrderTraversal();
    void PostOrderTraversal();
    BinarySearchTree* at(int data);


private:
    void PreOrderTraversal(BinarySearchTree* node);
    void InOrderTraversal(BinarySearchTree* node);
    void PostOrderTraversal(BinarySearchTree* node);
    BinarySearchTree* at(BinarySearchTree* node,int data);
};
