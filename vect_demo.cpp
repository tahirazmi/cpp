#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int m, n, o, r, s, q;
	cin>> n;
	vector<int>v[n];
	cin>>q;
	for (int i=0; i<n; i++)
	{
		cin>>m;
		for ( int j=0; j<m; j++)
		{
			cin>> o;
			v[n].push_back(o);
		}
	}
	for (int k=0; k<q; k++)
	{
		cin>>r;
		cin>>s;
		cout<< v[r][s]<<endl;
	}
	
	
	return 0;
}
