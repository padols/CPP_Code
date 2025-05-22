/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        // code here
        unordered_set<Node *> s;
        
        Node* prev = nullptr;
        while(head != NULL)
        {
            if(s.find(head) == s.end())
            {
                s.insert(head);
                prev = head;
                head = head->next;
            }else{
                prev->next = NULL;
                break;
            }
        }
    }
};
