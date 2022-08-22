# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        front = head
        dummy = ListNode(0, next=head)
        rear = dummy
        
        for i in range(n):
            front = front.next
            
        while front:
            rear = rear.next
            front = front.next
        
        rear.next = rear.next.next
        return dummy.next
