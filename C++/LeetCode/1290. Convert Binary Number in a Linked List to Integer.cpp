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
    int getDecimalValue(ListNode* head) {
        string s;   int dec = 0;
        while(head != nullptr){
            s += head -> val + 48;
            head = head -> next;
        }
        int base = 1;
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] == '1'){
                dec += base;
            }
            base = base * 2;
        }
        return dec;
    }
};