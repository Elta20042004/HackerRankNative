// Kangaroo.cpp : Defines the entry point for the console application.
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
int ok = 0;

void temp(int x1, int x2, int y1, int y2)
{
	int sravnitel = 0;
	if (x1>y1)
	{
		int t1 = x1;
		x1 = y1;
		y1 = t1;

		int t2 = x2;
		x2 = y2;
		y2 = t2;
	}

	sravnitel = y1-x1;

	int step1 = x1;
	int step2 = y1;

	while (ok==0)
	{
		step1 = step1 + x2;
		step2 = step2 + y2;

		if (step2 - step1 > sravnitel)
		{
			ok = 2;
		}
		else if (step2 - step1 == 0)
		{
			ok = 1;
		}
		sravnitel = step2 - step1;
	}
}

int _tmain2(int argc, _TCHAR* argv[])
{
	int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;

	if (v1==v2)
	{
		cout << "NO";
		 return 0;
	}

	temp (x1, v1, x2, v2);

	if (ok==1)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

    return 0;
}
//43 2 70 2  NO

