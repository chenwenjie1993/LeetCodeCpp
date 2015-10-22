/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 #include <iostream>
 #include <stdlib.h>
 using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode *next_node = node->next;
        node->next = next_node->next;
        node->val = next_node->val;
        free(next_node);
    }
};

int main() {
    Solution s;
    return 0;
}
