// https://www.naukri.com/code360/problems/deletion-in-doubly-linked-list_4609672?leftPanelTabValue=PROBLEM

/*
    Time Complexity:  O( N ).
    Space Complexity: O( 1 ).

    Where 'N' is the number of nodes in the list.
*/

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node *prev;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
                this->prev = NULL;
            }
        };

*****************************************************************/

int linkedListLength(Node* head){
	Node* temp = head;
	int cnt = 0;
	while(temp){
		temp=temp->next;
		cnt++;
	}
	return cnt;
}
void deleteNode(Node* &head, int pos) {
    if (pos < 0 || pos >= linkedListLength(head)) return;

    // Case 1: Delete head node
      if (pos == 0) {
        head = head -> next;
        head -> prev = NULL;
        return;
    }

    // Traverse to node at position k
    Node* temp = head;
    for (int i = 0; i < pos; ++i) {
        temp = temp->next;
    }

    // Update links
    if(temp->next != NULL) temp->next->prev = temp->prev;
    temp->prev->next = temp->next;

}
