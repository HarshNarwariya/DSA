#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    char data;
    unsigned freq;
    TreeNode *left, *right;

    TreeNode(char data, unsigned freq) {
        left = right = NULL;
        this->data = data;
        this->freq = freq;
    }
};

struct MinHeapCompare {
    bool operator() (TreeNode *left, TreeNode *right) {
        return (left->freq > right->freq);
    }
};
   
// Prints huffman codes from
// the root of Huffman Tree.
void getCodes(struct TreeNode* root, string str)
{
 
    if (!root)
        return;
 
    if (root->data != '@')
        cout << root->data << ": " << str << "\n";
 
    getCodes(root->left, str + "0");
    getCodes(root->right, str + "1");
}

void HuffmanCodes(char data[], int freq[], int size) {
    struct TreeNode *left, *right, *top;
    priority_queue<TreeNode*, vector<TreeNode*>, MinHeapCompare> minHeap;

    for (int i = 0; i < size; ++i) minHeap.push(new TreeNode(data[i], freq[i]));
    while (minHeap.size() > 1) {
        left = minHeap.top(); minHeap.pop();
        right = minHeap.top(); minHeap.pop();
        top = new TreeNode('@', left->freq + right->freq);
        top->left = left;
        top->right = right;
        minHeap.push(top);
    }
    getCodes(minHeap.top(), "");
    return;
}   

int main()
{
 
    char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int freq[] = { 5, 9, 12, 13, 16, 45 };
 
    int size = sizeof(arr) / sizeof(arr[0]);
 
    HuffmanCodes(arr, freq, size);
 
    return 0;
}