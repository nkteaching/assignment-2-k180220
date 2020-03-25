#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
	stack<int> s;
	s.push(3);
	s.push(2);
	s.push(1);
	cout<<"original stack: "<<endl;
	cout<<s.top()<<endl;
	//reverse using two stacks
	stack<int> s1,s2;
	while(!s.empty())
	{
		s1.push(s.top());
		s.pop();
	}
	while(!s1.empty())
	{
		s2.push(s1.top());
		s1.pop();
	}
	while(!s2.empty())
	{
		s.push(s2.top());
		s2.pop();
	}
	cout<<"after reverse: "<<endl;
	cout<<s.top()<<endl;
}
