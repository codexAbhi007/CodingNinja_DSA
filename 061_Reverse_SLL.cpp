// https://www.naukri.com/code360/problems/reverse-linked-list_920513?leftPanelTabValue=PROBLEM

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

Node* reverseLinkedList(Node *head)
{
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
