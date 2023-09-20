/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast != NULL && fast->next !=NULL)
        {
            fast = fast->next->next;
            slow = slow->next;

            if(fast==slow)
            {
                return true;
            }
        }
        return false;
        
    }
};*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> st;
        while(head!=NULL){
            if(st.find(head)!=st.end()){
                return true;
            }
            st.insert(head);
            head=head->next;
        }
        return false;
    }
};