// CompareTheTriplets.cpp : Defines the entry point for the console application.
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

int _tmain2(int argc, _TCHAR* argv[])
{
	 int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;

	int resultA=0;
	int resultB=0;

	
	if (a0>b0)
	{
		resultA = resultA +1;
	}
	else if (a0<b0)
	{
		resultB = resultB +1;
	}
	
	if (a1>b1)
	{
		resultA = resultA +1;
	}
	else if (a1<b1)
	{
		resultB = resultB +1;
	}

	if (a2>b2)
	{
		resultA = resultA +1;
	}
	else if (a2<b2)
	{
		resultB = resultB +1;
	}

	cout << resultA << ' ' << resultB;

    return 0;
}

