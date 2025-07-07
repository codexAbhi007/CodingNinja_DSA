// https://www.naukri.com/code360/problems/insertion-in-a-singly-linked-list_4609646?leftPanelTabValue=PROBLEM


#include <bits/stdc++.h>
using namespace std;

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

int linkedListLength(Node *head){
	Node* temp = head;
	int cnt = 0;
	while(temp){
		temp=temp->next;
		cnt++;
	}
	return cnt;
}
Node * insert(Node * head, int n, int pos, int val) {
    // Edge Cases
    if (pos > n || pos < 0) return head;

    Node* newNode = new Node(val);

    // Case 1: Insert at head
    if (pos == 0) {
        newNode->next = head;
        head = newNode;
        return head;
    }

    // Case 2: Insert at pos > 0
    Node* temp = head;
    for (int i = 1; i < pos; ++i) {
        if (temp != NULL) {
            temp = temp->next;
        }
    }

    newNode->next = temp->next;
    temp->next = newNode;
 

    return head;
}