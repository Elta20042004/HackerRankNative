#include "stdafx.h"
#include <vector>

class MinStack {
public:   
	std::vector<int> originalNumbers;
	std::vector<int> minNumbers;
	int min;

	MinStack() {
		min = INT_MAX;
	}

	void push(int x) {
		originalNumbers.push_back(x);

		if (x<min)
		{
			min = x;
		}

		minNumbers.push_back(min);
	}

	void pop() {
		originalNumbers.pop_back();
		minNumbers.pop_back();

		if (originalNumbers.empty())
		{
			min = INT_MAX;
		}
		else
		{
			int *lastMinElement =  &minNumbers.back();
			min = *lastMinElement;
		}
	} 

	int top() {
		int *topElement = &originalNumbers.back();
		return *topElement;
	}

	int getMin() {
		int *minElement = &minNumbers.back();
		return *minElement;
	}
};
