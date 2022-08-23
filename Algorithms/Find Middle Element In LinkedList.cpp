#include <bits/stdc++.h>
using namespace std;

class ListNode {
    public:
        int data;
        ListNode* next;

        ListNode(int d, ListNode* n = NULL) {
            data = d;
            next = n;
        }
};

ListNode* getLinkedList(vector<int> &arr) {
    if (arr.size() == 0) return NULL;
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;
    for (int i = 1; i < arr.size(); i++) {
        ListNode* newNode = new ListNode(arr[i]);
        temp->next = newNode;
        temp = temp->next;
    }
    return head;
}

ListNode* getMiddleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i: arr) {
        cin >> i;
    }
	ListNode* head = getLinkedList(arr);
	ListNode* middleNode = getMiddleNode(head);
	cout << middleNode->data;
	return 0;
}
