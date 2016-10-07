// CamelCase.cpp : Defines the entry point for the console application.
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
int counter = 1;

int _tmain2(int argc, _TCHAR* argv[])
{
	string s;
    cin >> s;

	
	for (int i=0; i<s.length(); i++)
	{
		 if('A' <=  s[i] && s[i] <= 'Z')
         {
			 counter++;
         }
	}

	cout << counter;
    return 0;
}

