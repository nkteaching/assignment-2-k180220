#include<bits/stdc++.h>
using namespace std;
void transfer(stack<int>& s1, stack<int>& s2)
{
    while(!s1.empty()) //fix thiss
	{
        int x1=s1.top();
        s1.pop();
    }
}
void print_stack(std::stack<int> st)
{ 
    while(!st.empty())
	{
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main()
{
	stack<int> s1;
	stack<int> s2;
	s1.push(3);
	s1.push(2);
	s1.push(1);
	print_stack(s1);
	transfer(s1,s2);
	print_stack(s2);
}
