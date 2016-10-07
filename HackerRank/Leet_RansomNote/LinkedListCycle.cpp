#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class LinkedListCycle {
public:
    bool hasCycle(ListNode *head) {

		if (head->next==NULL)
		{
			return false;
		}

		ListNode *first = head;		
		ListNode *second = head->next->next;

		while (first!=second && second!=NULL && second->next!=NULL)
		{
			first = first->next;
			second = second->next->next;
		}

	    return first==second;
	}
};
