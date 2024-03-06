class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        fast, slow = head, head

        while fast!=None and fast.next!=None:
            fast = fast.next.next
            slow = slow.next
            if fast==slow: return True
        return False