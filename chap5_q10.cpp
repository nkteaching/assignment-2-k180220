#include<bits/stdc++.h>
using namespace std;
double series(double n,double a,double terms)
{
	if(terms==0)
	{
		return 0;
	}
	else
	{
		a=1/n;
		return series(n+1,a,terms-1)+a;
	}
}
int main()
{
	cout<<series(1,3,2);
}
