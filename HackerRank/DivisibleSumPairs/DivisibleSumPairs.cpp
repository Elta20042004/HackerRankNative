// DivisibleSumPairs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int counter = 0;

void temp (vector<int> a, int k)
{
	for (std::vector<int>::iterator it = a.begin(); it != a.end()-1; ++it)
	{
		for (std::vector<int>::iterator jt = it+1; jt != a.end(); ++jt)
		{
			if ((*it + *jt) % k == 0)
			{
				counter++;
			}
		}
	}

}


int _tmain2(int argc, _TCHAR* argv[])
{
	int n;
	int k;
	cin >> n >> k;
	vector<int> a(n);
	for(int a_i = 0;a_i < n;a_i++){
		cin >> a[a_i];
	}

	temp (a,k);

	cout << counter;
	return 0;
}

