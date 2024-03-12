#pragma once

#include <iostream>
#include <string>
using namespace std;
//Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class ReverseLinkedList
{

public:
	void traverse(ListNode* head) {
		ListNode* tmp = head;
		while (tmp) {
			cout << to_string(tmp->val) + " ";
			tmp = tmp->next;
		}
		cout << endl;
	}

	ListNode* reverseList(ListNode* head) {
		ListNode* pre = nullptr;
		ListNode* cur = head;
		while (cur) {
			ListNode* next = cur->next;
			cur->next = pre;
			pre = cur;
			cur = next;
		}
		return pre;
	}

	void run() {
		cout << "leetcode 206. ·´×ªÁ´±í" << endl;
		ListNode* l4 = new ListNode(4);
		ListNode* l3 = new ListNode(3, l4);
		ListNode* l2 = new ListNode(2, l3);
		ListNode* l1 = new ListNode(1, l2);
		ListNode* head = new ListNode(0, l1);

		traverse(head);

		ListNode* res = reverseList(head);

		traverse(res);
		cout << endl;
	}
};

