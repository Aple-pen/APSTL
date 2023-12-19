#pragma once
#include <iostream>

template <typename T>
struct Node
{
    T data;
    Node* next;
};

template <typename T>
class LinkedList
{
private:
    Node<T>* head;

    Node<T>* createNode(T data)
    {
        Node<T>* node = new Node<T>();
        node->data = data;
        node->next = nullptr;

        return node;
    }

public:
    LinkedList(): head(nullptr)
    {
    }

    void appendNode(T data)
    {
        auto node = createNode(data);
        auto _head = head;
        auto temp_node = head;

        if (head == nullptr)
        {
            head = new Node<T>();
            head->next = node;
            return;
        }

        while (temp_node->next != nullptr)
        {
            temp_node = temp_node->next;
            if (temp_node->next == nullptr)
            {
                temp_node->next = node;
                break;
            }
        }
    }

    void insertNode(int at)
    {
    }

    void removeNode(int at)
    {
        int idx = 0;
        auto prev_node = head;
        Node<T>* next_node;
        
        while (prev_node->next != nullptr)
        {
            next_node = prev_node->next;
            if (idx == at)
            {
                if (next_node->next == nullptr) //at이 node갯수와 같거나 그이상일때
                {
                    prev_node->next = nullptr;
                    delete next_node;
                    break;
                }

                prev_node->next = next_node->next;
                delete next_node;
                break;
            }
            prev_node = prev_node->next;
            idx++;
        }
    };

    int nodeLength()
    {
        auto temp_node = head;
        int count = 0;
        if (head == nullptr) return count;

        while (temp_node->next != nullptr)
        {
            temp_node = temp_node->next;
            count++;
        }
        return count;
    }

    void printNodes()
    {
        int idx = 0;
        auto temp_node = head;
        if (head == nullptr)
        {
            std::cout << "zero nodes" << std::endl;
        }

        while (temp_node->next != nullptr)
        {
            temp_node = temp_node->next;
            std::cout << "Node index : " << idx++
                << ", Data : " << temp_node->data
                << std::endl;
        }
    }
};
