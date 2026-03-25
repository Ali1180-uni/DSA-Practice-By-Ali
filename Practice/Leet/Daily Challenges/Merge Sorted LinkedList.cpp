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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l1 = nullptr;
        ListNode* temp = nullptr;
        if(list1 == nullptr) return list2;
        if(list2 == nullptr) return list1;

        if(list1->val < list2->val){
            l1 = list1;
            list1 = list1->next;
        }else{
            l1 = list2;
            list2 = list2->next;
        }

        temp = l1;

        while(list1 != nullptr && list2 != nullptr){
            if(list1->val < list2->val){
                temp->next = list1;
                list1 = list1->next;
            }else{
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }

        if(list1 != nullptr){
            temp->next = list1;
        }else{
            temp->next = list2;
        }


        return l1;
    }
};