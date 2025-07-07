// https://www.naukri.com/code360/problems/delete-node-in-ll_5881?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int linkedListLength(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
Node *deleteNode(Node *head, int pos)
{
    if (pos >= linkedListLength(head))
    {
        return head;
    }
    if (pos == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i < pos; ++i)
        {
            temp = temp->next;
        }
        Node *toBeDeleted = temp->next;
        temp->next = toBeDeleted->next;
        delete toBeDeleted;
    }

    return head;
}
