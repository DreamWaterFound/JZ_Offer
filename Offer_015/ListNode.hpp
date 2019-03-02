#ifndef __LIST_NODE_HPP__
#define __LIST_NODE_HPP__


struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(nullptr) {
	};
};

#endif //__LIST_NODE_HPP__