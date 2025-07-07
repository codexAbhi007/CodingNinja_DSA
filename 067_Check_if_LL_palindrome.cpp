// https://www.naukri.com/code360/problems/check-if-linked-list-is-palindrome_985248?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the Node class:

    class Node
    {
    public:
        int data;
        Node *next;
        Node()
        {
            this->data = 0;
            next = NULL;
        }
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(int data, Node* next)
        {
            this->data = data;
            this->next = next;
        }
    };

*****************************************************************/
    Node* reverseList(Node* head) {
    Node* curr = head;
    Node* after = head;
    Node* before = NULL;
    while(curr!= NULL){
        after = after->next;
        curr->next = before;
        before = curr;
        curr = after;
    }

    head = before;
    return head;
    }
bool isPalindrome(Node *head)
{
       Node* slow = head;
        Node* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        } 
        Node* rev = reverseList(slow);
        while (rev != nullptr) {
            if (head->data != rev->data) {
                return false;
            }
            head = head->next;
            rev = rev->next;
        }
        return true;
}