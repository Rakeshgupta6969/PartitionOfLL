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
        ListNode* partition(ListNode* head, int x) {
         // using the brute force solution.
    
         if(head == NULL || head -> next == NULL) return head;
    
    
         vector<int> ans1;
    
         ListNode* temp = head;
    
         while(temp != NULL){
            ans1.push_back(temp -> val);
            temp = temp -> next;
         }
    
         vector<int> ans2;
    
         for(int i = 0; i<ans1.size(); i++){
    
           if(x>ans1[i]){
    
            ans2.push_back(ans1[i]);
           }
    
    
         }
    
          for(int i = 0; i<ans1.size(); i++){
    
           if(x<=ans1[i]){
    
            ans2.push_back(ans1[i]);
           }
    
         }
    
    
           ListNode * dummy = new ListNode(-1);
    
         ListNode * temp2 = dummy;
    
         for(int i = 0; i<ans2.size(); i++){
         
         ListNode* temp3 = new ListNode(ans2[i]);
    
         temp2 -> next = temp3;
    
         temp2 = temp3;
    
    
         }
    
    
        return dummy -> next;
    
    
        }
    };