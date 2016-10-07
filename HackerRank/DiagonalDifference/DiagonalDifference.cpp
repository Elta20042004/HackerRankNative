// DiagonalDifference.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int diagonal_00=0;
int diagonal_0n=0;

void temp (vector<vector<int>> a, int n)
{
	int i = 0;
	int j = 0;

	while (j<n)
	{
		diagonal_00 = diagonal_00 + a[i][j];
		i=i+1;
		j=j+1;
	}

	i=0;
	j=n-1;

	while (j>=0)
	{
		diagonal_0n = diagonal_0n + a[i][j];
		i=i+1;
		j=j-1;
	}

	int rez = std::abs(diagonal_00 - diagonal_0n);
	cout << rez;

}

int _tmain(int argc, _TCHAR* argv[])
{
	 int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }

	temp(a, n);

    return 0;
}

