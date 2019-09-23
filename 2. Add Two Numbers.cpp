https://leetcode.com/problems/add-two-numbers/

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		int carry = 0;
		ListNode* head = new ListNode(0);
		ListNode* curr = head;

		while ((l1 != NULL) || (l2 != NULL)) {
			int x = 0, y = 0;
			if (l1 != NULL)
				x = l1->val;
			if (l2 != NULL)
				y = l2->val;

			int sum = x + y + carry;
			carry = 0;
			if (sum >= 10) {
				sum -= 10;
				carry = 1;
			}
			ListNode* pos = new ListNode(sum);
			curr->next = pos;
			curr = curr->next;

			if (l1 != NULL)
				l1 = l1->next;
			if (l2 != NULL)
				l2 = l2->next;
		}
		if (carry != 0) {
			ListNode* pos = new ListNode(carry);
			curr->next = pos;
		}
		return head->next;
	}
};
