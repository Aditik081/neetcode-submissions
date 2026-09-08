class Solution {
public:
    Node* copyRandomList(Node* head) {

        Node* temp = head;
        map<Node*, Node*> mp;

        // Step 1: Create all new nodes
        while (temp != NULL) {
            Node* newNode = new Node(temp->val);

            mp[temp] = newNode;

            temp = temp->next;
        }

        // Step 2: Connect next and random pointers
        temp = head;

        while (temp != NULL) {
            Node* copyNode = mp[temp];

            copyNode->next = mp[temp->next];
            copyNode->random = mp[temp->random];

            temp = temp->next;
        }

        return mp[head];
    }
};