// https://www.naukri.com/code360/problems/insertion-in-doubly-linked-list_4609682?leftPanelTabValue=PROBLEM
#include <bits/stdc++.h> 
using namespace std;
/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;
        Node *prev;

        Node(int val) {
            this->data = val;
            next = NULL;
            prev = NULL;
        }
        ~Node() {
            if(next != NULL || prev != NULL){
                delete next;
            }
        }
};

************************************************************/
int linkedListLength(Node *head){
	Node* temp = head;
	int cnt = 0;
	while(temp){
		temp=temp->next;
		cnt++;
	}
	return cnt;
}

Node* insert(int k, int val, Node *head) {
    if(k < 0 || k > linkedListLength(head)){
        return head;
    } 

    Node* newNode = new Node(val);
     if (k == 0) {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return head;
    }

    int i;
    Node* temp = head;
    for(i = 1;i <= k-1;++i){
        temp = temp->next;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    // Check if last node or not 
    if(temp -> next != NULL) temp->next->prev = newNode;
    temp->next = newNode;

    return head;
}

