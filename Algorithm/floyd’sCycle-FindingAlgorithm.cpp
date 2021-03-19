// C++ Program for detecting loop in a linked list
// we use two pointer in this method
// slow is increased by 1 and fast is increased by 2

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/

class Solution
{
    public:
    bool detectLoop(Node* head)
    {
        // your code here
        struct Node *slow = head;
        struct Node *fast = head;
        while(slow && fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                return true;
            }
        }
        return false;
    }
};

