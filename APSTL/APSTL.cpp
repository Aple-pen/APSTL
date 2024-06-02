#include <iostream>
#include <map>

#include "BinarySearchTree.h"

using namespace std;

int main(int argc, char* argv[])
{
    auto bst = new BinarySearchTree();
    bst->InsertNode(10);
    bst->InsertNode(5);
    bst->InsertNode(7);
    bst->InsertNode(6);
    bst->InsertNode(8);

    auto r = bst->at(8);
    
    return 0;
}