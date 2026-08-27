class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* t1 = list1;
        ListNode* t2 = list2;

        ListNode* dNode = new ListNode(-1);
        ListNode* temp = dNode;

        while (t1 != nullptr && t2 != nullptr) {

            if (t1->val < t2->val) {
                temp->next = t1;
                temp = t1;
                t1 = t1->next;
            }
            else {
                temp->next = t2;
                temp = t2;
                t2 = t2->next;
            }
        }

        // Jo list bach gayi hai, use directly attach kar do
        if (t1 != nullptr) {
            temp->next = t1;
        }
        else {
            temp->next = t2;
        }

        return dNode->next;
    }
};