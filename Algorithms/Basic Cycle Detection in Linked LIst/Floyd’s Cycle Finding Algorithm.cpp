// This algorithm can be used for many other problems
// Problems like
// 1. Detect Cycle in linked list (contains only one cycle)
// 2. To find the duplicate element in the array having element
//    in range [1, m] where m = size of the array + 1.

#include <bits/stdc++.h>
using namespace std;

class ListNode {
    public:
        int data;
        ListNode* next;

        ListNode (int data) {
            this->data = data;
            next = NULL;
        }
};

bool hasCycle(ListNode* head) {
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}

ListNode* getLinkedListWithLoop(vector<int> &arr, int n, int k) {
    ListNode* head = (n > 0) ? new ListNode(arr[0]): NULL;
    ListNode* temp = head;
    ListNode* looped = (k == 0) ? head: NULL;
    for (int i = 1; i < n; i++) {
        ListNode* next = new ListNode(arr[i]);
        if (k == i) looped = next;
        temp->next = next;
        temp = temp->next;
    }
    
    temp->next = looped;
    return head;
}

int main () {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto &ele: arr) {
        cin >> ele;
    }
    ListNode* head = getLinkedListWithLoop(arr, n, k);
    cout << (hasCycle(head) ? "Has Cycle": "No Cycle Detected");
    return 0;
}