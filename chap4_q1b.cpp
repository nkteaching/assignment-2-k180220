#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;
int main()
{
	stack<int> s;
	s.push(3);
	s.push(2);
	s.push(1);
	queue<int> q;
	while(!s.empty())
	{
		q.push(s.top());
		s.pop();
	}
	while(!q.empty())
	{
		s.push(q.front());
		q.pop();
	}
	cout<<s.top()<<endl;
}
