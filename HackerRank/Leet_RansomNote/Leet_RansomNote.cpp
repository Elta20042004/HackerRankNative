// Leet_RansomNote.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include "MinStack.cpp"
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{


	/*RansomeNode rN;
	bool ok = rN.canConstruct("aa","aa");
*/
	


	//int vv[11] = { 1,1,2,4,6,7,3,6,7,4,3 }; // vv ? name it 'values'
	//   std::vector<int> v(begin(vv), end(vv)); // what's begin(), end() ? you should include something, I do not see
	//SingleNumber sN;
	//int k = sN.singleNumber(v);

	MinStack mS;



	mS.push(0);
	mS.push(1);
	mS.push(0);

	int min = mS.getMin(); // 0
	mS.pop();
	min = mS.getMin();     //0

	return 0;

	//["MinStack","push","push","push","getMin","pop","getMin"]
	//[[],[0],[1],[0],[],[],[]]



	//["MinStack","push","push","push","top","pop","getMin","pop","getMin","pop","push","top","getMin","push","top","getMin","pop","getMin"]
	//[[],[2147483646],[2147483646],[2147483647],[],[],[],[],[],[],[2147483647],[],[],[-2147483648],[],[],[],[]]

	//["constructor","null","null","null","2147483647","null","2147483646","null","2147483646","null","null","2147483647","0","null","-2147483648","-2147483648","null","0"]
	//["constructor","null","null","null","2147483647","null","2147483646","null","2147483646","null","null","2147483647","2147483647","null","-2147483648","-2147483648","null","2147483647"]
}

