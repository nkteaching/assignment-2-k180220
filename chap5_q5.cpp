#include<bits/stdc++.h>
using namespace std;
void printodd1(int start,int limit)  //between 1 and n
{
	if(start>limit)
	{
		return;
	}
	cout<<start<<" ";
	printodd1(start+2,limit);
}
void printodd2(int start,int limit)
{
	if(start<limit&&start!=1)
	{
		return;
	}
	if(start%2 != 0)
	{
		cout<<start<<" ";
		printodd2(start-2,limit);
	}
	else
	{
		printodd2(start-1,limit);
	}
}
int main()
{
	printodd1(1,9);
	cout<<endl;
	printodd2(11,1);
}
