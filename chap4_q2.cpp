#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
	stack<int> s;
	stack<int> temp;
	s.push(1);
	s.push(5);
	s.push(0);
	s.push(9);
	s.push(7);
	while(!s.empty())
	{
		int x=s.top();
		s.pop();
		while(!temp.empty()&&temp.top()>x)
		{
			s.push(temp.top());
			temp.pop();
		}
		temp.push(x);
	}	
	cout<<temp.top();
}
