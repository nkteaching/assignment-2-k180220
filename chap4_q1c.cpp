#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
	stack<int> s;
	stack<int> s1;
	s.push(7);
	s.push(6);
	s.push(5);
	int v;
	while(s.empty())
	{
		v=s.top();
		s.pop();
		s1.push(v);
	}
	cout<<s.top()<<endl;
}
