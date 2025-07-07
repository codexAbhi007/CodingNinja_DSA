// https://www.naukri.com/code360/problems/reverse-a-doubly-linked-list_1116098?leftPanelTabValue=PROBLEM

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node* reverseDLL(Node* head)
{   
    Node* curr = head;
    Node* before = NULL;

    while(curr->next != NULL){
        curr = curr->next;
        curr->prev->next = before;
        curr->prev->prev = curr;
        before = curr->prev;
    }
    curr->prev = NULL;
    curr->next = before;
    head = curr;
    return head;
}

