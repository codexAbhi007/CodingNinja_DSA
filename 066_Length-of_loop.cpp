// https://www.naukri.com/code360/problems/find-length-of-loop_8160455?leftPanelTabValue=PROBLEM

/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/

int lengthOfLoop(Node *head) {
Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            // Loop detected, now find loop length
            Node* temp = slow;
            int length = 1;
            while (temp->next != slow) {
                temp = temp->next;
                length++;
            }
            return length;
        }
    }
    return 0;  
}
