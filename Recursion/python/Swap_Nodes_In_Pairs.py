# Given a linked list, swap every two adjacent nodes and return its head.
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

def swapPairs(head):
    # Base condition for recursive solution
    if head is not None:
        if head.next is None:
            return head
        # next element of head will be swapped head
        new_head = head.next
        # Swapping algorithm: recursion
        new_head.next, head.next = head, swapPairs(new_head.next)
        return new_head
