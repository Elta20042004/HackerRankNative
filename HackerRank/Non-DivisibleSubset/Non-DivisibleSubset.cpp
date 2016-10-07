// Non-DivisibleSubset.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int counter=0;

void temp (vector<long> a, int k)
{
	for (std::vector<long>::iterator i = a.begin(); i != a.end()-1; ++i)
	{
		for (std::vector<long>::iterator j=i+1; j != a.end(); ++j)
		{
			if ((*i+*j)%k==0)
			{
				counter++;
			}
		}
	}

}

int _tmain2(int argc, _TCHAR* argv[])
{
	/*int n;
	int k;
	cin >> n >> k;
	vector<long> a(n);
	for(int a_i = 0;a_i < n;a_i++){
		cin >> a[a_i];
	}*/


	std::vector<long> a(10);
	a[0] = 770528134;
	a[1] = 663501748;
	a[2] = 384261537;
	a[3] = 800309024;
	a[4] = 103668401;
	a[5] = 538539662;
	a[6] = 385488901;
	a[7] = 101262949;
	a[8] = 557792122;
	a[9] = 46058493;
	temp (a, 5);
	cout << counter;
	return 0;
}

//10 5
//770528134 663501748 384261537 800309024 103668401 538539662 385488901 101262949 557792122 46058493
//6
