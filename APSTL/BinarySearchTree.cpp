#include "BinarySearchTree.h"

#include <iostream>

void BinarySearchTree::InsertNode(int data)
{
    if (rootNode == nullptr)
    {
        rootNode = new BinarySearchTree();
        rootNode->data = data;
        return;
    }

    BinarySearchTree* currentNode = rootNode;
    BinarySearchTree* parentNode = nullptr;
    while (currentNode != nullptr)
    {
        parentNode = currentNode;
        if (currentNode->data < data)
            currentNode = parentNode->leftSubTree;
        else if (currentNode->data > data)
            currentNode = currentNode->rightSubTree;
        else
            return;
    }

    if (parentNode->data < data)
    {
        parentNode->leftSubTree = new BinarySearchTree();
        parentNode->leftSubTree->data = data;
    }
    else if (parentNode->data > data)
    {
        parentNode->rightSubTree = new BinarySearchTree();
        parentNode->rightSubTree->data = data;
    }
}

void BinarySearchTree::PreOrderTraversal()
{
    PreOrderTraversal(rootNode);
}

void BinarySearchTree::PreOrderTraversal(BinarySearchTree* node)
{
    if (node == nullptr)
        return;

    std::cout << node->data << " ";
    PreOrderTraversal(node->leftSubTree);
    PreOrderTraversal(node->rightSubTree);
}

void BinarySearchTree::InOrderTraversal()
{
    InOrderTraversal(rootNode);
}

void BinarySearchTree::InOrderTraversal(BinarySearchTree* node)
{
    if (node == nullptr)
        return;

    InOrderTraversal(node->leftSubTree);
    std::cout << node->data << " ";
    InOrderTraversal(node->rightSubTree);
}

void BinarySearchTree::PostOrderTraversal()
{
    PostOrderTraversal(rootNode);
}

void BinarySearchTree::PostOrderTraversal(BinarySearchTree* node)
{
    if (node == nullptr)
        return;

    PostOrderTraversal(node->leftSubTree);
    PostOrderTraversal(node->rightSubTree);
    std::cout << node->data << " ";
}

BinarySearchTree* BinarySearchTree::at(int data)
{
    auto currentNode = rootNode;
    if (currentNode->data < data)
        at(currentNode->leftSubTree,data);
    else if(currentNode -> data > data)
        at(currentNode->rightSubTree,data);
    else if(currentNode->data == data)
        return currentNode;
    else
        return nullptr;
}

BinarySearchTree* BinarySearchTree::at(BinarySearchTree* node,int data)
{
    auto currentNode = node;
    if (currentNode->data < data)
        at(currentNode->leftSubTree,data);
    else if(currentNode -> data > data)
        at(currentNode->rightSubTree,data);
    else if(currentNode->data == data)
        return currentNode;
    else
        return nullptr;
}
