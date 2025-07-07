// https://www.naukri.com/code360/problems/delete-node-in-a-linked-list_1105578?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void deleteNode(LinkedListNode<int> *node)
{
    LinkedListNode<int> *nextNode = node->next;
    node->data = node->next->data;
    node->next = node->next->next;
    delete nextNode;
}