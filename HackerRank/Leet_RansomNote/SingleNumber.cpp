#include "stdafx.h"
#include <vector>

class SingleNumber{	
public:
	int singleNumber(const std::vector<int>& nums) const{
		int sum=0;
		std::vector<int>::const_iterator it = nums.begin();
		while(it != nums.end()) {
			sum^=*it;
			it++;
		}
		return sum;	
	}
};

//#include "stdafx.h"
//#include <vector>
//
//class SingleNumber{	
//public:
//	int singleNumber(const std::vector<int>& nums) const{
//		int sum=0;
//		for(std::vector<int>::const_iterator it = nums.begin(); it != nums.end(); ++it) {
//			sum^=*it;
//		}
//		return sum;
//	}
//};
//
//
//#include "stdafx.h"
//#include <vector>
//#include <algorithm>

//class SingleNumber{
//
//	struct Sum
//	{
//		Sum() {sum=0;};	
//		void operator()(int n) { sum ^= n; }
//		int sum;
//	};
//
//public:
//	int singleNumber(const std::vector<int>& nums) const{
//		Sum s = std::for_each(nums.begin(), nums.end(), Sum());
//		return s.sum;
//	}
//};
