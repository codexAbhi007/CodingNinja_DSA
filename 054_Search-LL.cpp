// https://www.naukri.com/code360/problems/search-in-a-linked-list_975381?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

    template <typename T>
    class Node
    {
    public:
        T data;
        Node<T> *next;
        Node()
        {
            this->data = 0;
            this->next = NULL;
        }
        Node(T data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(T data, T* next)
        {
            this->data = data;
            this->next = next;
        }
    };


int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    Node<int>* temp = head;
    while(temp){
        if(temp->data == k) return 1;
        temp = temp->next;
    }
    return 0;
}