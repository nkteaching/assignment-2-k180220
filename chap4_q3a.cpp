#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
	stack<int> s1;
	stack<int> s2;
	stack<int> temp;
	s1.push(4);
	s1.push(3);
	s1.push(2);
	cout<<s1.top()<<endl;
	while(!s1.empty())
	{
		temp.push(s1.top());
		s1.pop();
	}
	while(!temp.empty())
	{
		s2.push(temp.top());
		temp.pop();
	}
	cout<<s2.top();
}
