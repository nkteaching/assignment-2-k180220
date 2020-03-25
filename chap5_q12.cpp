#include<bits/stdc++.h>
using namespace std;
void rec_cubes(int n)
{
	if(n==0)
	{
		return;
	}
	else
	{
		cout<<n*n*n<<" ";
		rec_cubes(n-1);
	}
}
int main()
{
	rec_cubes(5);
}
