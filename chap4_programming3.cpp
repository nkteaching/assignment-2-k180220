#include<bits/stdc++.h>
using namespace std;
bool delimitermatching(string exp) 
{ 
    stack<char> s; 
    char x; 
    for(int i=0; i<exp.length(); i++) 
    { 
        if(exp[i]=='('||exp[i]=='['||exp[i]=='{') 
        { 
            s.push(exp[i]); 
        } 
        if (s.empty()) 
        {
        	return false;
		}
        switch(exp[i]) 
        { 
        	case ')': 
            x = s.top(); 
            s.pop(); 
            if (x=='{'||x=='[') 
            {
            	return false;
			}
            break; 
        	case '}': 
            x = s.top(); 
            s.pop(); 
            if (x=='('||x=='[') 
            {
            	return false;
			} 
            break; 
        	case ']': 
            x = s.top(); 
            s.pop(); 
            if (x=='('||x=='{') 
            {
            	return false;
			}
            break; 
        } 
    } 
    return (s.empty()); 
} 
int main()
{
	string exp="(1{[2]})";
	if(delimitermatching(exp)==1)
	{
		cout<<"matching";
	}
	else
	{
		cout<<"not matching";
	}
}
