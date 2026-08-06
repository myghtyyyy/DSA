/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        stack<ListNode*> st;
        
    ListNode*temp=head;
    int count=0;
    while(temp){
        count++;
        st.push(temp);
        temp=temp->next;
    }
    ListNode*first=head;
    for(int i=0;i< count/2;i++){
        temp=first->next;
        first->next=st.top();
        st.top()->next=temp;
        first=temp;
        st.pop();
    }
    first->next=nullptr;
    }
};